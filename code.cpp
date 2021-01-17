// ABC052B
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
    int x = 0;
    int maxnum = 0;
    int N;
    string S;
    cin >> N >> S;

    for (int i = 0; i < N; i++) {
        if (S[i] == 'I') {
            x++;
        } else if (S[i] == 'D') {
            x--;
        }

        if (x >= maxnum) {
            maxnum = x;
        }
    }

    cout << maxnum << endl;

    return 0;
}