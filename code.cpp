// ABC172B
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

using ll  = long long;
using namespace std;

int main()
{
    string S, T;
    cin >> S;
    cin >> T;
    
    ll ans = 0;
    if (S == T) {
        cout << 0 << endl;
    } else {
        for (int i = 0; i < S.length(); i++) {
            if (S[i] == T[i]) {

            } else {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}