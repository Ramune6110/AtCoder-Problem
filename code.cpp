// ABC164B
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
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    bool flag = false;
    for (int i = 1; i <= 100; i++) {
        C = C - B;
        if (C <= 0) {
            flag = true;
            break;
        }

        A = A - D;
        if (A <= 0) {
            flag = false;
            break;
        }
    }

    if (flag == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}