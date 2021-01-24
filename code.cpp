// ABC072B
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
    string S;
    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        if ((i % 2) == 0) {
            cout << S[i];
        }
    }
    cout << endl;

    return 0;
}
