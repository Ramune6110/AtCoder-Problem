// ABC214B
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
    int S, T;
    cin >> S >> T;

    int ans = 0;
    for (int a = 0; a <= S; a++) {
        for (int b = 0; a + b <= S; b++) {
            for (int c = 0; a + b + c <= S; c++) {
                if (a * b * c <= T) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
