// ABC073A
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
    int N;
    cin >> N;

    // 数値の各桁の数を算出する
    int dig[2];
    for (int i = 0; i < 2; i++) {
        dig[i] = N % 10;
        N = N / 10;
    }
    if ((dig[0] == 9) || (dig[1] == 9)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}