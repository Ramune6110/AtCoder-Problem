// ABC092B
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
    long int A, B;
    int K;
    cin >> A >> B >> K;

    for (int i = A; i < A + K && i <= B; i++) {
        cout << i << endl;
    }
    for (int i = max(B - K + 1, A + K); i <= B; i++) {
        cout << i << endl;
    }

    return 0;
}