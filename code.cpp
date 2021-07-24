// ABC093A
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

	// https://www.sejuku.net/blog/49318
	int A = S.find_first_of('a');
	int B = S.find_first_of('b');
	int C = S.find_first_of('c');

	if ( (A == std::string::npos) || (B == std::string::npos) || (C == std::string::npos) ) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}
	
	return 0;
}
