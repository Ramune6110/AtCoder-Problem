// ABC151B
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
    int N, K, M;
    cin >> N >> K >> M;

    vector<int> A(N - 1);
    for (int i = 0; i < N - 1; i++) {
        cin >> A[i];
    }

    int ans = 0;
    int total = M * N - std::accumulate(A.begin(), A.end(), 0);
    if (total >= 0 && total <= K) {
        ans = total;
    } else if (total < 0) {
        ans = 0;
    } else if (total > K) {
        ans = -1;
    }

    cout << ans << endl;

    return 0;
}