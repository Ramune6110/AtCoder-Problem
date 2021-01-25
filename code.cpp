// ABC088B
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
    int N;
    cin >> N;

    int a[N];
    for (int i = 1; i <= N; i++) {
        cin >> a[i - 1];
    }

    // 配列を降順にソートする
    sort(a, a + SIZE_OF_ARRAY(a), greater<int>());

    int alice = 0;
    int bob = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            alice = alice + a[i];
        } else {
            bob = bob + a[i];
        }
    }
    
    cout << alice - bob << endl;

    return 0;
}
