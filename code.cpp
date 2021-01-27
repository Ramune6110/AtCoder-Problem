// ABC094B
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
    int N, M, X;
    cin >> N >> M >> X;

    vector<int> A(M);
    for (int i = 1; i <= M; i++) {
        cin >> A.at(i - 1);
    }

    int countlow = 0;
    int counthigh = 0;
    for (int i = 1; i <= M; i++) {
        if (A.at(i - 1) < X) {
            countlow++;
        } else {
            counthigh++;
        }
    }

    cout << min(countlow, counthigh) << endl;

    return 0;
}