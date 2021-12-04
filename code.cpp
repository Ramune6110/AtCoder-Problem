// ABC205B
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

    vector<ll> A(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool flag = false;
    //昇順ソート
    sort(A.begin(),A.end());
    for (ll i = 1; i <= N; i++) {
        if (A[i - 1] == i) {
            flag = true;
        } else {
            flag = false;
            break;
        }
    }

    if (flag == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}