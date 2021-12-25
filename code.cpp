// ABC216B
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

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

using ll = long long;
using namespace std;

int main()
{   
    int N;
    cin >> N;

    vector<string> S(N);
    vector<string> T(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i] >> T[i];
    }
 
    bool flag = false;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (S[i] == S[j] && T[i] == T[j]) {
                flag = true;
            }
        }
    }

    if (flag == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
