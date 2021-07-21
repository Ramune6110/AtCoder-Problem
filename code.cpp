// ABC125B
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

	vector<int> C(N);
	vector<int> V(N);
	for (int i = 0; i < N; i++) {
		cin >> V.at(i);
	}
	for (int i = 0; i < N; i++) {
		cin >> C.at(i);
	}

	vector<int> dp(N);
	dp[0] = 0;
	for (int i = 1; i <= N; i++) {
		dp[i] = max(dp[i - 1], dp[i - 1] + V[i - 1] - C[i - 1]);
	}

	cout << dp[N] << endl;

	return 0;
}
