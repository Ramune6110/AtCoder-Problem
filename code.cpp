// ABC085B
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
    int N;
    cin >> N;

    vector<int> d(N);
    rep(i, N) {
        cin >> d[i];
    }

    sort(d.begin(), d.end());

    int sum = 0;
    rep(i, N) {
        // sort処理
        sort(d.begin(), d.end());
        // 最後の要素にアクセス
        // cout << d[d.size() - 1] << endl;
        if ((d.size() > 0) && (d[d.size() - 1] > 0)) {
            // 最も値の大きい要素を削除
            vector<int>::iterator e = remove(d.begin(), d.end(), d[d.size() - 1]);
            // 不要な要素を消去
            d.erase(e, d.end());
            sum++;
        } else {
            break;
        }
    }

    cout << sum << endl;

    return 0;
}