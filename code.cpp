// ABC162B
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
    ll N;
    cin >> N;

    vector<ll> a(N);

    for (ll i = 1; i <= N; i++) {
        if ( (i % 3 == 0) && (i % 5 == 0) ) {
            a[i - 1] = 0;
        } else if (i % 3 == 0) {
            a[i - 1] = 0;
        } else if (i % 5 == 0) {
            a[i - 1] = 0;
        } else {
            a[i - 1] = i;
        }
    }
    
    // std::accumulateの初期値について
    // http://kowaimononantenai.blogspot.com/2013/11/stdaccumulatevectorstdaccumulate3.html
    ll init = 0;
    ll sum = std::accumulate(a.begin(), a.end(), init);
    cout << sum << endl;

    return 0;
}