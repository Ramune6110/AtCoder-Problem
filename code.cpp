// ABC057C
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
#define FOR(i, n, m) for(int i = (int)(n); i < (int)(m); i++)
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

using ll = long long;
using namespace std;

long int digsum(long int num);

int main()
{
    long int N;
    cin >> N;

    long int ans = 0;
    long int digmin = digsum(N);
    // 折り返し処理のためa * aがN以下までの範囲で全探索すればOK
    for (long int a = 1; a * a <= N; a++) {
        if (N % a != 0) continue;

        long int b = N / a;

        ans = min(digmin, max(digsum(a), digsum(b)));
    }

    cout << ans << endl;

    return 0;
} 

// ある整数の桁数を返す関数(各桁の和も算出)
long int digsum(long int num) 
{
    long int dig = 0;
    long int sum = 0;
    long int count = 0;
    while (num) {
        dig = num % 10;
        sum = sum + dig;
        num = num / 10;
        count++;
    }

    return count;
}
