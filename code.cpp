// ABC108A
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
    int K;
    cin >> K;

    int even = 0;
    int odd = 0;
    for (int i = 1; i <= K; i++) {
        if (i % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    int combination = even * odd;
    cout << combination << endl;

    return 0;
}