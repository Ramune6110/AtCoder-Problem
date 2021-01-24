// ABC077A
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

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

using namespace std;

int main()
{   
    char C[2][3];

    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 3; j++) {
            cin >> C[i - 1][j - 1];
        }
    }

    if ((C[0][0] == C[1][2]) && (C[0][1] == C[1][1]) && (C[0][2] == C[1][0])) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
