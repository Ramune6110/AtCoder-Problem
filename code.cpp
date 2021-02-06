// ABC150C
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
    int N;
    cin >> N;

    vector<int> P(N), Q(N);
    rep(i, N) {
        cin >> P[i];
    }
    rep(i, N) {
        cin >> Q[i];
    }

    vector<int> order(N);
    rep(i, N) {
        order[i] = i + 1;
    }
    
    int count   = 0;
    int p_count = 0;
    int q_count = 0;
    do {
        if (order == P) {
            p_count = count;
        }
        if (order == Q) {
            q_count = count;
        }
        
        count++;
    } while(next_permutation(order.begin(), order.end()));
    
    cout << abs(p_count - q_count) << endl;
    
    return 0;
} 