// greedy_algorithm

//*****************************************************
// 貪欲法（評価値の高い順に取り込んでいくことで解を得る方法）
// ABC160B, 153C, 133B, 136B
//*****************************************************


// ABC160B
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
    int X;
    cin >> X;

    int num500 = X / 500;
    X = X - num500 * 500;
    int num5 = X / 5;
    X = X - num5 * 5;

    cout << 1000 * num500 + 5 * num5 << endl;

    return 0;
}

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