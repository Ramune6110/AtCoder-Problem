// ABC095C
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
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    int sum = 0;
    int ans = 1000000000;
    for (int i = 0; i <= 100000; i++) {
        sum = A * max(0, X - i) + B * max(0, Y - i) + C * (2 * i);
        ans = min(ans, sum);
    }
    
    cout << ans << endl;

    return 0;
}
