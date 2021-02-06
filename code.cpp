// ABC191C
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
#define FOR(i, n, m) for(int i = (int)(n); i < (int)(m); i++)
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

using ll = long long;
using namespace std;

/* 小数点n以下で四捨五入する */
double round_n(double number, double n)
{
    number = number * pow(10,n-1); //四捨五入したい値を10の(n-1)乗倍する。
    number = round(number); //小数点以下を四捨五入する。
    number /= pow(10, n-1); //10の(n-1)乗で割る。
    return number;
}

int main()
{
    /*int H, W;
    cin >> H >> W;

    vector<vector<int>> S(H, vector<int>(W));
    rep(i, H) {
        rep(j, W) {
            cin >> S[i][j];
        }
    }*/

    double X, Y, R;
    cin >> X >> Y >> R;
    
    /*vector<double> x(2 * R + 1);
    vector<double> y(2 * R + 1);
    rep(i, 2 * R + 1) {
        x[i] = X - R + i;
        y[i] = Y + R - i;
    }
    
    vector<pair<double, double>> data(2 * R + 1);
    for(int i = 0; i < 2 * R + 1; i++){
        for (int j = 0; j < 2 * R + 1; j++) {
            data[i].first = x[j];
            data[j].second = y[i];
        }
 	}*/
    
    
    double x[2 * (int)ceil(R) + 10][2 * (int)ceil(R) + 10];
    double y[2 * (int)ceil(R) + 10][2 * (int)ceil(R) + 10];
    for (int i = 0; i < 2 * (int)ceil(R) + 1; i++) {
        for (int j = 0; j < 2 * (int)ceil(R) + 1; j++) {
            x[i][j] = X - R + (double)j;
            y[i][j] = Y + R - (double)i;
        }
    }

    ll count = 0;
    double dist = 0;
    for(int i = 0; i < 2 * (int)ceil(R) + 1; i++){
        for (int j = 0; j < 2 * (int)ceil(R) + 1; j++) {
            //dist = sqrt((X - data[i].first) * (X - data[i].first) + (Y - data[i].first) * (Y - data[i].first));
            dist = sqrt((X - x[i][j]) * (X - x[i][j]) + (Y - y[i][j]) * (Y - y[i][j]));
            dist = round_n(dist, 5.0);

            if (dist == R) {
                count++;
            } else if (dist < R) {
                count++;
            }
        }
	}

    cout << count << endl;

    return 0;
} 