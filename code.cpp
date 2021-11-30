// ABC192B
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
    string S;
    cin >> S;

    bool flag = false;
    for (int i = 0; i < S.size(); i++) {
        // 奇数のとき，小文字判定
        // https://note.com/kazusasan/n/n0a3581ca0f23
        if (i % 2 == 0) {
            char c = S[i]; // https://qiita.com/MasahiroBW/items/3f56b22a079cd3272cd3
            if (islower(c)) {
                flag = true;
            } else {
                flag = false;
                break;
            }
        } else {
            // 偶数のとき，大文字判定
            // https://note.com/kazusasan/n/n0a3581ca0f23
            char c = S[i]; // https://qiita.com/MasahiroBW/items/3f56b22a079cd3272cd3
            if (isupper(c)) {
                flag = true;
            } else {
                flag = false;
                break;
            }
        }
    }

    if (flag == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}