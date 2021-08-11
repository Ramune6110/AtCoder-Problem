// ABC157B
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
    // vector2次元配列
    vector<vector<int>> A(3, vector<int>(3));
    rep(i, 3) {
        rep(j, 3) {
            cin >> A[i][j];
        }
    }

    int N;
    cin >> N;

    vector<int> b(N);
    for (int i = 0; i < N; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < N; i++) {
        int num = b[i];
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (num == A[j][k]) {
                    A[j][k] = -1;
                }
            }
        }
    }

    // 横判定
    bool horizontal_flag = false;
    for (int j = 0; j < 3; j++) {
        if ( (A[j][0] == A[j][1]) && (A[j][1] == A[j][2] ) ) {
            horizontal_flag = true;
            break;
        }
    }

    // 縦判定
    bool vertical_flag = false;
    for (int j = 0; j < 3; j++) {
        if ( (A[0][j] == A[1][j]) && (A[1][j] == A[2][j]) ) {
            vertical_flag = true;
            break;
        }
    }

    // 斜め判定
    bool diagonal_flag = false;
    if ( ( (A[0][0] == A[1][1]) && (A[1][1] == A[2][2]) ) || ( (A[0][2] == A[1][1]) && (A[1][1] == A[2][0]) ) ) {
        diagonal_flag = true;
    }

    // 最終判定
    if ( (horizontal_flag == true) || (vertical_flag == true) || (diagonal_flag == true) ) {
        cout << "Yes" << endl;
    } else if ( (horizontal_flag == false) && (vertical_flag == false) && (diagonal_flag == false) ) {
        cout << "No" << endl;
    }

    return 0;
}