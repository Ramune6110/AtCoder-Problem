// ABC146B
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

    string S;
    cin >> S;

    for (int i = 0; i < S.length(); i++) {
        S.at(i) += N;
        if (S.at(i) > 'Z') {
            S.at(i) -= 26;
        }
    }

    cout << S << endl;

    return 0;
}