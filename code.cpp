// ABC117B
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

	vector<int> L(N);
	for (int i = 0; i < N; i++) {
		cin >> L[i];
	}

	sort(L.begin(), L.end());

	int sum = 0;
	for (int i = 0; i < L.size() - 1; i++) {
		sum += L[i];
	}

	if (sum > L[L.size() - 1]) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
} 