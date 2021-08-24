// ABC103A
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

using ll  = long long;
using namespace std;

int main()
{
    vector<int> A(3);
    for (int i = 0; i < 3; i++) {
        cin >> A[i];
    }
    
    vector<int> task(3 * 2);
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            task[0] = abs(A[i] - A[i + 1]) + abs(A[i + 2] - A[i + 1]);
            task[1] = abs(A[i] - A[i + 2]) + abs(A[i + 1] - A[i + 2]);
        }
        if (i == 1) {
            task[2] = abs(A[i - 1] - A[i]) + abs(A[i + 1] - A[i - 1]);
            task[3] = abs(A[i + 1] - A[i]) + abs(A[i - 1] - A[i + 1]);
        }
        if (i == 2) {
            task[4] = abs(A[i - 2] - A[i]) + abs(A[i - 1] - A[i - 2]);
            task[5] = abs(A[i - 1] - A[i]) + abs(A[i - 2] - A[i - 1]);
        }
    }
    
    // vectorを昇順ソートにソートする
    sort(task.begin(),task.end());

    cout << task[0] << endl;

    return 0;
}