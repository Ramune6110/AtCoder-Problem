// ABC090A
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
	// (3 × 3)要素の配列を宣言
	vector<vector<char>> c(3, vector<char>(3));
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> c.at(i).at(j);
		}
	}

	for (int i = 0; i < 3; i++) {
		cout <<  c.at(i).at(i);
	}

	return 0;
} 