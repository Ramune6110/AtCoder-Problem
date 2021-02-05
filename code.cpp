// ABC153C
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
#define FOR(i, n, m) for(int i = (int)(n); i < (int)(m); i++)
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

using ll = long long;
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<ll> H(N);
    rep(i, N) {
        cin >> H[i];
    }

    sort(H.begin(), H.end());
    
    ll sum = 0;
    if (N < K) {
        cout << 0 << endl;
    } else {
        for (int i = 0; i < N - K; i++) {
            sum += H[i];
        }
        cout << sum << endl;
    }

    return 0;
}