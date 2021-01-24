// ABC086B
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

int string_to_convert_num(int a, int b);
bool is_squere(long long N);

int main()
{
    int a, b, num;
    cin >> a >> b;

    num = string_to_convert_num(a, b);

    if (is_squere(num)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

// 平方数かどうかの判定
bool is_squere(long long N) 
{
    long long r = (long long)floor(sqrt((long double)N));  // 切り捨てした平方根
    return (r * r) == N;
}

// 文字列を連結して数値に変換
int string_to_convert_num(int a, int b)
{
    //  数値を文字列で連結
    ostringstream ss;
    ss << a << b;

    string str;
    str = str + ss.str();
    
    // 文字列を数値に変換
    istringstream si;
    si = istringstream(str);
    int num = atoi(str.c_str());
    si >> num;

    return num;
}