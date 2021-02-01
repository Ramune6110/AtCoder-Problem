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
    int X;
    cin >> X;

    // ある整数以下で最大のべき乗数を求める
    int ans = 1;
    for (int i = 2; i <= X; i++) {
        for (int j = 2; j <= X; j++) {
            if (pow(i, j) > X) break;
            ans = max(ans, (int)pow(i, j));
        }
    }

    cout << ans << endl;

    return 0;
}