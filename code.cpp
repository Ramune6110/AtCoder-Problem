// ABC145B
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

    string S;
    cin >> S;
 
    bool flag = false;
    if (N % 2 == 0) {
        for (int i = 0; i < N / 2; i++) {
            if (S[i] == S[i + N / 2]) {
                flag = true;
            } else {
                flag = false;
                break;
            }   
        }
    } else {
        flag = false;
    }
    
    if (flag == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}