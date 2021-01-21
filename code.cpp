// ABC062B
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
    int H, W;
    cin >> H >> W;

    char a[H][W];
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> a[i - 1][j - 1];
        }
    }

    char ans[H + 2][W + 2];
    for (int i = 1; i <= H + 2; i++) {
        for (int j = 1; j <= W + 2; j++) {
            if ((i == 1) || (i == H + 2)) {
                ans[i - 1][j - 1] = '#';
            } else {
                if (j == 1) {
                    ans[i - 1][j - 1] = '#';
                }
                if (j == W + 2) {
                    ans[i - 1][j - 1] = '#';
                }
            }
        }

        for (int j = 2; j <= W + 1; j++) {
            ans[i][j - 1] = a[i - 1][j - 2];
        }
    }

    for (int i = 1; i <= H + 2; i++) {
        for (int j = 1; j <= W + 2; j++) {
            cout << ans[i - 1][j - 1];
        }
        cout << endl;
    }
    
    return 0;
}