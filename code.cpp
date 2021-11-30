// ABC193B
#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <string>
#include <regex>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <vector>
#include <set>

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

using ll = long long;
using namespace std;

int main()
{
    ll N;
    cin >> N;

    vector<vector<ll>> data(N, vector<ll>(3));
    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < 3; j++) {
            cin >> data.at(i).at(j);
        }
    }

    ll ans = INT_MAX;
    for (ll i = 0; i < N; i++) {
        // 等差数列
        // https://www.studyplus.jp/379
        ll num = data.at(i).at(0) + 0.5;
        // 小数点以下を求める
        // https://qiita.com/truepoint1200612/items/5aaa9b3d646572143909
        ll a = num - floor(num);
        if (a >= 0.5) {
            num = num + 1;
        } else {
            num = num - a;
        }
        if (data.at(i).at(2) - num > 0) {
            ll value = data.at(i).at(1);
            if (value < ans) {
                ans = value;
            }
        }
    }

    if (ans == INT_MAX) {
        cout << "-1" << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}