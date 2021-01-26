// ABC079A
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

bool digsum(int num);

int main()
{
    int N;
    bool flag;
    
    cin >> N;
    
    flag = digsum(N);

    if (flag == true) {
        cout << "Yes" << endl;
    } else if (flag == false) {
        cout << "No" << endl;
    }

    return 0;
}

// 整数の各桁の数字が等しいかを判定する関数
bool digsum(int num) 
{
    int dig[4];
    for (int i = 1; i <= 4; i++) {
        dig[i - 1] = num % 10;
        num = num / 10;
    }

    bool flag = false;
    if ((dig[0] == dig[1]) && (dig[1] == dig[2])) {
        flag = true;
    } else if ((dig[1] == dig[2]) && (dig[2] == dig[3])) {
        flag = true;
    } else if ((dig[0] == dig[1]) && (dig[1] == dig[2]) && (dig[2] == dig[3]) && (dig[3] == dig[0])) {
        flag = true;
    } else {
        flag = false;
    }

    return flag;
}