// ABC083B
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

int digsum(int num);

int main() 
{
    int N, A, B;
    cin >> N >> A >> B;

    int sum = 0;
    int numsum = 0;
    for (int i = 1; i <= N; i++) {
        sum = digsum(i);

        if ((sum >= A) && (sum <= B)) {
            numsum = numsum + i;
        }
    }
    
    cout << numsum << endl;

    return 0;
}

// 整数の各桁の数字とその和を出す関数
int digsum(int num) 
{
    int dig = 0;
    int sum = 0;
    while (num) {
        dig = num % 10;
        sum = sum + dig;
        num = num / 10;
    }

    return sum;
}