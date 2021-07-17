// ABC114B
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

long int digsum(long int num);

int main()
{   
    string S;
	cin >> S;
    
	int minnum = 10000;
	for (int i = 0; i < S.length() - 2; i++) {
		string sub = S.substr(i, 3);
		// 文字列から数字型へ変換
		// https://qiita.com/MasahiroBW/items/3f56b22a079cd3272cd3
		int num;
		istringstream number;

		number = istringstream(sub);
		number >> num;

		if (abs(num - 753) < minnum ) {
			minnum = abs(num - 753);
		}
	}

	cout << minnum << endl;

	return 0;
} 