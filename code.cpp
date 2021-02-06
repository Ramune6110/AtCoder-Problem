// ABC183C
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

    vector<vector<int>> T(N, vector<int>(N));
    rep(i, N) {
        rep(j, N) {
            cin >> T[i][j];
        }
    }

    vector<int> order(N);
    rep(i, N) {
        order[i] = i;
    }

    int sum = 0;
    int count = 0;
    do {
        for (int i = 0; i < N; i++) {
            sum += T[order[i]][order[(i + 1)%N]];
        }
        if (sum == K) {
            count++;
        }
        sum = 0;
    } while(next_permutation(order.begin() + 1, order.end()));
    
    cout << count << endl;
    
    return 0;
} 