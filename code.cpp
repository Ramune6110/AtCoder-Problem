// ABC206B
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

    ll sum = 0;
    ll data = 0;
    for (ll i = 1; i <= N; i++) {
        sum += i;
        if (sum >= N) {
            data = i;
            break;
        }
    }

    cout << data << endl;

    return 0;
}