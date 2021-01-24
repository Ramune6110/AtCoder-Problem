// ABC056B
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
    int W, a, b;
    cin >> W >> a >> b;

    int A = a + W;
    int B = b;
    int C = a;
    int D = b + W;

    if (A < B) {
        cout << B - A << endl;
    } else if (C > D) {
        cout << C -D << endl;
    } else if ((A > B) || (C < D) || (A == B) || (C == D)) {
        cout << 0 << endl;
    }

    return 0;
}

