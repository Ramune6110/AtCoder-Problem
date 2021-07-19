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
	int N, M;
	cin >> N >> M;
	
	vector<int> ans(M + 1);
	for (int i = 0; i < N; i++) {
		int K, index;
		cin >> K;
		for (int j = 0; j < K; j++) {
			cin >> index;
			ans[index - 1]++;
		}
	}

	int count = 0;
	for (int i = 0; i < M; i++) {
		if (ans[i] == N) {
			count++;
		}
	}

	cout << count << endl;
	
	return 0;
}