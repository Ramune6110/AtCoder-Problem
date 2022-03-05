// ABC218B
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
    vector<int> P(26);
    for (int i = 0; i < 26; i++) {
        cin >> P[i];
    }

    for (int i = 0; i < 26; i++) {
        // C++ 辞書順でi番目の文字を求める
        // https://zenn.dev/honeycom/articles/e046d515b7962f
        cout << (char)('a' + P[i] - 1);
    }
    cout << endl;

    return 0;
}
