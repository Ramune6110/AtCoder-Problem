// ABC149B
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
    ll A, B, K;
    cin >> A >> B >> K;

    /*
    ll num = (A - 1) - K;
    if (A >= 1 && num >= 0) {
        A -= K;
    } else {
        num = K - A;
        A = 0;
    }

    ll numb = (B - 1) - num;
    if (A < 1 && B >= 1 && numb >= 0) {
        B -= num;
    } else {
        B = 0;
    }

    if (A == 0) {
        A = 0;
    } else if (B == 0) {
        B = 0;
    }
    */
   
    ll num = min(A, K);
    A = A - num;
    K = K - num;
    B = B - min(B, K);

    cout << A << " " <<  B << endl;

    return 0;
}