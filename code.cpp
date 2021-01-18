// ABC071A
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
    int x, a, b;
    cin >> x >> a >> b;

    if (abs(x - a) < abs(x - b)) {
        cout << "A" << endl;
    } else if (abs(x - a) > abs(x - b)) {
        cout << "B" << endl;
    }

    return 0;
}