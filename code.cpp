// ABC067B
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
    int N, K;
    cin >> N >> K;

    int l[N];
    for (int i = 1; i <= N; i++) {
        cin >> l[i - 1];
    }

    sort(l, l + SIZE_OF_ARRAY(l));

    int sum = 0;
    for (int i = 1; i <= K; i++) {
        sum = sum + l[SIZE_OF_ARRAY(l) - i];
    }

    cout << sum << endl;

    return 0;
}