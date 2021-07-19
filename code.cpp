// ABC089A
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
	int N;
	cin >> N;

	int count = 0;
	while(N > 0) {
		N = N - 3;
		if (N < 0) break;
		count++;
	}

	cout << count << endl;

	return 0;
} 
