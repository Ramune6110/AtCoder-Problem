// ABC120B
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

int gcd(int x, int y, int K);

int main()
{
	int A, B, K;
	cin >> A >> B >> K;

	int num = gcd(A, B, K);

	cout << num << endl;

	return 0;
}

// 最大公約数を求める関数
// https://qiita.com/akilax/items/d28aacbcd0836de2eea7
int gcd(int x, int y, int K) {
    int m = min(x, y);
	int count = 0;
    for(int d = m; d > 0; d--) {
        if(x % d == 0 && y % d == 0) {
			count++;
			if (count == K) {
				return d;
			}
        }
    }
}
