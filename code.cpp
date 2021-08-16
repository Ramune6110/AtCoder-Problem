// ABC101A
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
    string S;
    cin >> S;
    
    int ans = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '+') {
            ans += 1;
        } else if (S[i] == '-') {
            ans -= 1;
        }
    }

    cout << ans << endl;
    
    return 0;
}