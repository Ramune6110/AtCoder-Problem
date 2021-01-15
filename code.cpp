// ABC065A
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
    long int X, A, B;
    cin >> X >> A >> B;

    if ((B - A) <= 0) {
        cout << "delicious" << endl;
    } else if (((B - A) <= X) && ((B - A) > 0)) {
        cout << "safe" << endl;
    } else if (((B - A) >= X + 1) && ((B - A) > 0)) {
        cout << "dangerous " << endl;
    }

    return 0;
}
