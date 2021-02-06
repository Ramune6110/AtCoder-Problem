//**********************************************
// 順列全探索
// ABC145C, 150C, 054C
//**********************************************

// ABC145C
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

double dist(double x1, double x2, double y1, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
    int N;
    cin >> N;

    vector<int> x(N), y(N);
    rep(i, N) {
        cin >> x[i] >> y[i];
    }

    vector<int> p(N);
    rep(i, N) {
        p[i] = i;
    }
    
    double length = 0;
    double count = 0;

    do {
        for (int i = 1; i < N; i++) {
            length += dist(x[p[i]], x[p[i - 1]], y[p[i]], y[p[i - 1]]);
        }
        count++;
    } while(next_permutation(p.begin(), p.end()));

    double ans = length / count;

    cout << fixed << setprecision(15) << ans << endl;

    return 0;
} 