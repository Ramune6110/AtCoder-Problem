// ABC053B
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
    string s;
    cin >> s;

    long int  minA = 200000, maxZ = 0;
    for (long int i = 0; i < s.length(); i++) {
        if (s[i] == 'A') {
            if (minA > i) {
                minA = i;
            }
        }

        if (s[i] == 'Z') {
            if (maxZ < i) {
                maxZ = i;
            }
        }
    }

    cout << (maxZ - minA + 1) << endl;

    return 0;
}