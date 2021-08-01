// ABC140B
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

    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N - 1);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < N - 1; i++) {
        cin >> C[i];
    }

    int total = 0;
    int prev  = 0;
    for (int i = 0; i < N; i++) {
        total += B[A[i] - 1];

        if (prev == A[i] - 1) {
            total += C[prev - 1];
        }
        prev = A[i];
    }

    cout << total << endl;

    return 0;
}
