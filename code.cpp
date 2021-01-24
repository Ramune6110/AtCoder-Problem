// ABC070B
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
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int minsec;
    int maxsec;
    minsec = max(A, C);
    maxsec = min(B, D);

    if ((maxsec - minsec) > 0) {
        cout << maxsec - minsec << endl;
    } else if ((maxsec - minsec) <= 0) {
        cout << 0 << endl;
    }

    return 0;
}
