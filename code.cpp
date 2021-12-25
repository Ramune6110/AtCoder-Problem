// ABC211B
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
    vector<string> str;
    for (int i = 0; i < 4; i++) {
        cin >> S;
        str.push_back(S);
    }

    bool flag1 = false;
    bool flag2 = false;
    bool flag3 = false;
    bool flag4 = false;
    for (int i = 0; i < 4; i++) {
        if (str[i] == "H") {
            flag1 = true;
        } else if (str[i] == "2B") {
            flag2 = true;
        } else if (str[i] == "3B") {
            flag3 = true;
        } else if (str[i] == "HR") {
            flag4 = true;
        }
    }

    if (flag1 == true && flag2 == true && flag3 == true && flag4 == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
