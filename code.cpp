// ABC081B
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

bool divide_by_two(int A[], int N);

int main() 
{
    int N;
    cin >> N;

    int A[N];
    for (int i = 1; i <= N; i++) {
        cin >> A[i - 1];
    }
    
    int cnt = 0;
    bool flag = true;
    while (flag) {
        flag = divide_by_two(A, N);

        for (int i = 1; i <= N; i++) {
            A[i - 1] = A[i - 1] / 2;
        }

        cnt++;
    }

    cout << cnt - 1 << endl;

    return 0;
}

// 全ての数が2で割れるかを判定する関数
bool divide_by_two(int A[], int N) {
    bool flag = false;
    for (int i = 1; i <= N; i++) {
        if (A[i - 1] % 2 == 0) {
            flag = true;
        } else {
            flag = false;
            break;
        }
    }

    return flag;
}
