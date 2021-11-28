// ABC181B
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
    ll N;
    cin >> N;

    ll a, b;
    ll ans = 0;
    for (ll i = 0; i < N; i++) {
        cin >> a >> b;
        // 等差数列：和の公式
        // https://rikeilabo.com/formula-list-of-arithmetic-progression
        ans += ((b - a + 1) * (a + b)) / 2;
    }

    cout << ans << endl;

    return 0;
}