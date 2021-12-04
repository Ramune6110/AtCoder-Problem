// ABC199B
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
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<int> B(N);
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
 
    int max_A = *max_element(A.begin(), A.end());
    int min_B = *min_element(B.begin(), B.end());

    int sum = 0;
    if (max_A == min_B) {
        sum = 1;
    } else if (max_A > min_B) {
        sum = 0;
    } else {
        sum = min_B - max_A + 1;
    }
    
    cout << sum << endl;

    return 0;
}