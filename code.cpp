// ABC073B
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

    int l[N], r[N];
    for (int i = 1; i<= N; i++) {
        cin >> l[i - 1] >> r[i - 1];
    }

    int num = 0;
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        num = abs(l[i - 1] - r[i - 1]) + 1;
        sum = sum + num;
    }

    cout << sum << endl;

    return 0;
}