// ABC179B
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

    // int型の2次元配列(N×2要素の)の宣言
    vector<vector<int>> data(N, vector<int>(2));
    for (int i = 0; i < N; i++) {
        cin >> data.at(i).at(0) >> data.at(i).at(1);
    }

    bool flag = false;
    for (int i = 0; i < N - 2; i++) {
        if ((data.at(i).at(0) == data.at(i).at(1)) && 
            (data.at(i + 1).at(0) == data.at(i + 1).at(1)) &&
            (data.at(i + 2).at(0) == data.at(i + 2).at(1))) 
        {
            flag = true;
        }
    }

    if (flag == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}