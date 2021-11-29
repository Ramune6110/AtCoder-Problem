// ABC191B
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
    ll N, X;
    cin >> N >> X;

    vector<ll> A(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
    }

    // DELETES all elements with value "X"
    // https://www.delftstack.com/ja/howto/cpp/remove-element-from-vector-cpp/
    A.erase(std::remove(A.begin(), A.end(), X), A.end());
    
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }

    return 0;
}