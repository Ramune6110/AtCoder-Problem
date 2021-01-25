// ABC080B
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

long int digsum(long int num);

int main()
{
    long int N;
    cin >> N;

    long int sum;
    sum = digsum(N);

    if (N % sum == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

// 整数の各桁の数字とその和を出す関数
long int digsum(long int num) 
{
    long int dig = 0;
    long int sum = 0;
    while (num) {
        dig = num % 10;
        sum = sum + dig;
        num = num / 10;
    }

    return sum;
}