// ABC127B
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
	int r, D, x;
	cin >> r >> D >> x;

	vector<int> X(10);
	X[0] = x;
	for (int i = 1; i <= 10; i++) {
		X[i] = r * X[i - 1] - D;
		cout << X[i] << endl;
	}

	return 0;
}
