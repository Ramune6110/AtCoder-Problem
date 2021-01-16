// ABC050B
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
    int N;
    cin >> N;

    vector<int> T(N);
    for (int i = 1; i <= N; i++) {
        cin >> T[i - 1];
    }

    int M;
    cin >> M;

    vector<int> P(M), X(M);
    for (int i = 1; i <= M; i++) {
        cin >> P[i - 1] >> X[i - 1];
    }

    int temp, index;
    for (int i = 1; i <= M; i++) {
        index    = P[i - 1] - 1;
        temp     = T[index];
        T[index] = X[i - 1];
        int sum  = accumulate(T.begin(), T.end(), 0);
        cout << sum << endl;
        T[index] = temp;
    }

    return 0;
}