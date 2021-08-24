// ABC167B
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
    ll A, B, C, K;
    cin >> A >> B >> C >> K;

    ll total = 0;
  
    if (K <= A) {
        total = K;
    } else if (K > A && K <= A + B) {
        total = A;
    } else if (K > A + B && K <= A + B + C) {
        total = A - abs(K - (A + B));
    }

    cout << total << endl;

    return 0;
}