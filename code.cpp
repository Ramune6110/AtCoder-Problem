// ABC097B
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
    int N, M;
    cin >> N >> M;

    vector<int> A(M), B(M);
    rep(i, M) {
        cin >> A[i] >> B[i];
    }

    int K;
    cin >> K;
    vector<int> C(K), D(K);
    rep(i, K) {
        cin >> C[i] >> D[i];
    }

    int ans = 0;
    int k2 = 1 << K;
    rep(s, k2) {
        vector<int> dish(N + 1);
        rep(i, K) {
            if ((s >> i) & 1) {
                dish[D[i]]++;
            } else {
                dish[C[i]]++;
            }
        }

        int now = 0;
        rep(i, M) {
            if (dish[A[i]] == 0) continue;
            if (dish[B[i]] == 0) continue;
            now++;
        }

        ans = max(ans, now);
    }

    cout << ans << endl;

    return 0;
}