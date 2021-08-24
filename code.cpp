// ABC168B
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
    int K;
    cin >> K;

    string S;
    cin >> S;

    vector<string> ans;
    if (S.length() <= K) {
        cout << S << endl;
    } else if (S.length() > K) {
        for (int i = 0; i < K; i++){
            // charからstringへ変換
            // https://marycore.jp/prog/cpp/convert-char-to-string/
            string s = string {S[i]};
            ans.push_back(s);
        }
        ans.push_back("...");
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}