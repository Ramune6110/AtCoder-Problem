// ABC153B
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
    ll H, N;
    cin >> H >> N;

    vector<ll> A(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
    }

    // 配列を降順にソートする
    sort(A.begin(), A.end(), greater<ll>());

    bool flag = false;
    for (ll i = 0; i < N; i++) {
        H -= A[i];
        if (H <= 0) {
            flag = true;
            break;
        }
    }

    if (H <= 0) {
       flag = true; 
    }

    if (flag == true) {
        cout << "Yes" << endl;
    } else if (flag == false) {
        cout << "No" << endl;
    }

    return 0;
}