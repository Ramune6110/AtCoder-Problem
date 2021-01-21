// ABC054B
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
    int N, M;
    char A[50][50], B[50][50];
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cin >> B[i][j];
        }
    }

    bool flag = false;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((i + M -1 >= N) || (j + M - 1 >= N)) {
                continue;
            }

            bool match = true;
            for (int x = 0; x < M; x++) {
                for (int y = 0; y < M; y++) {
                    if (A[i + x][j + y] != B[x][y]) {
                        match = false;
                    }
                }
            }

            if (match) {
                flag = true;
            }
        }
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}