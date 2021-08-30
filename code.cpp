// ABC173B
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
    ll N;
    cin >> N;

    vector<string> S(N);
    for (ll i = 0; i < N; i++) {
        cin >> S[i];
    }

    ll C0 = 0;
    ll C1 = 0;
    ll C2 = 0;
    ll C3 = 0;
    for (ll i = 0; i < N; i++) {
        if (S[i] == "AC") {
            C0++;
        } else if (S[i] == "WA") {
            C1++;
        } else if (S[i] == "TLE") {
            C2++;
        } else if (S[i] == "RE") {
            C3++;
        }
    }

    cout << "AC" << " " << "x" << " " << C0 << endl;
    cout << "WA" << " " << "x" << " " << C1 << endl;
    cout << "TLE" << " " << "x" << " " << C2 << endl;
    cout << "RE" << " " << "x" << " " << C3 << endl;

    return 0;
}