// ABC0049B
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
    char pixel[H][W];
    char longpixel[2 * H][W];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> pixel[i][j];
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << pixel[i][j];
        }
        cout << endl;
        for (int j = 0; j < W; j++) {
            cout << pixel[i][j];
        }
        cout << endl;
    }

    return 0;
}
