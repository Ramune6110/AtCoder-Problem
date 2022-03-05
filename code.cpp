// ABC217B
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
    vector<string> AtCoder = {"ABC", "ARC", "AGC", "AHC"};

    vector<string> S(3);
    for (int i = 0; i < 3; i++) {
        cin >> S[i];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (S[i] == AtCoder[j]) {
                AtCoder[j] = "existence";
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        if (AtCoder[i] != "existence") {
            cout << AtCoder[i] << endl;
            return 0;
        }
    }
}
