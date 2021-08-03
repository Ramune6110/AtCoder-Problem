// ABC144B
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
    int N;
    cin >> N;

    bool flag = false;
    for (int i = 1; i <= 9; i++) {
        if (N % i == 0) {
            int ans = N / i;
            if ((ans >= 1) && (ans <= 9)) {
                flag = true;
            }
        }
    }

    if (flag == false) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}