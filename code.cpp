// ABC104A
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
    int R;
    cin >> R;

    if (R < 1200) {
        cout << "ABC" << endl;
    } else if (R >= 1200 && R < 2800) {
        cout << "ARC" << endl;
    } else if (R >= 2800) {
        cout << "AGC" << endl;
    }

    return 0;
}