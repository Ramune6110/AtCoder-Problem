// ABC174B
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
    double N, D;
    cin >> N >> D;

    // int型の2次元配列(N * 2要素の)の宣言
    vector<vector<int>> data(N, vector<int>(2));
    for (int i = 0; i < N; i++) {
        cin >> data.at(i).at(0) >> data.at(i).at(1);
    }
    
    double count = 0.0;
    for (int i = 0; i < N; i++) {
        double distance = sqrt(pow(data.at(i).at(0), 2.0) + pow(data.at(i).at(1), 2.0));
        if (distance <= D) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}