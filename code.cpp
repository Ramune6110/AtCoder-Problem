// ABC186B
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
    int H, W;
    cin >> H >> W;

    vector<vector<int>> data(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> data.at(i).at(j);
        }
    }
    
    // 2次元配列の最小値を求める方法
    // 各行に対して min_element を繰り返す
    // https://www.k-pmpstudy.com/entry/2019/08/27/cpp2Dmax
    int MIN = INT_MAX;
    for (int i = 0; i < H; ++i) {
        MIN = min(MIN, (int)*min_element(data[i].begin(), data[i].end()));
    }

    int sum = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            sum += (data.at(i).at(j) - MIN);
        }
    }

    cout << sum << endl;

    return 0;
}