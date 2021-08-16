// ABC159B
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
    string S;
    cin >> S;

    int N = S.size();
    int cnt = (N - 1) / 2;

    bool palin_1 = false;
    for (int i = 0; i < cnt; i++) {
        if (S[i] == S[cnt - (i + 1)]) {
            palin_1 = true;
        } else {
            palin_1 = false;
            break;
        }

        if (palin_1 == false) break;
    }

    int cnt2 = (N + 3) / 2 - 1;
    bool palin_2 = false;
    for (int i = (N + 3) / 2 - 1; i < N; i++) {
        if (S[i] == S[N - ((i - cnt2) + 1)]) {
            palin_2 = true;
        } else {
            palin_2 = false;
            break;
        }

        if (palin_2 == false) break;
    }

    if (palin_1 == true && palin_2 == true) {
        cout << "Yes" << endl; 
    } else {
        cout << "No" << endl;
    }

    return 0;
}