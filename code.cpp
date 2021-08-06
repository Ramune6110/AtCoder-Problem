// ABC152B
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
    int a, b;
    cin >> a >> b;

    //  数値を文字で連結
    ostringstream A;
    for (int i = 0; i < b; i++) {
        A << a;
    }

    ostringstream B;
    for (int i = 0; i < a; i++) {
        B << b;
    }

    string str_A;
    str_A = str_A + A.str();

    string str_B;
    str_B = str_B + B.str();

    // 文字列の比較(辞書順)
    if (str_A > str_B) {
        cout << str_B << endl;
    } else if (str_A < str_B) {
        cout << str_A << endl;
    } else if (str_A == str_B) {
        cout << str_A << endl;
    }

    return 0;
}