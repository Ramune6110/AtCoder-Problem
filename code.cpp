// ABC166B
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

using ll  = long long;
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    
    vector<int> sunuke(N);
    for (int i = 0; i < N; i++) {
        sunuke[i] = 1;
    }

    for (int i = 0; i < K; i++) {
        int d;
        cin >> d;

        for (int j = 0; j < d; j++) {
            int A;
            cin >> A;

            sunuke[A - 1] = 0;
        }
    }

    int init = 0;
    int sum = accumulate(sunuke.begin(), sunuke.end(), init);

    cout << sum << endl;

    return 0;
}