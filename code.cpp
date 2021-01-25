// ABC090B
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
    int A, B;
    cin >> A >> B;

    int sum = 0;
    for (int i = A; i <= B; i++) {
        // 数値を文字列に変換
        string str = to_string(i);
        if ((str[0] == str[4]) && (str[1] == str[3])) {
            sum++;
        }
    }

    cout << sum << endl;

    return 0;
}