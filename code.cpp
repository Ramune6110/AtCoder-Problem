// ABC075A
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

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A == B) {
        cout << C << endl;
    } else if (B == C) {
        cout << A << endl;
    } else if (C == A) {
        cout << B << endl;
    }

    return 0;
}