// ABC138C
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

int main()
{
    int N;
    cin >> N;

    vector<float> v(N);
    rep(i, N) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    
    float average = (v[0] + v[1]) / 2.0f;
    
    for (int i = 2; i < N; i++) {
        average = (average + v[i]) / 2.0f;
    }

    cout << average << endl;

    return 0;
} 