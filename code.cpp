// ABC0067A
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

    if (A % 3 == 0) {
        cout << "Possible" << endl;
    } else if (B % 3 == 0) {
        cout << "Possible" << endl;
    } else if ((A + B) % 3 == 0) {
        cout << "Possible" << endl;
    } else {
        cout << "Impossible" << endl;
    }

    return 0;
}
