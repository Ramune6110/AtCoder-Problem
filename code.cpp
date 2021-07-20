// ABC121B
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
	int N, M, C;
	cin >> N >> M >> C;

	vector<int> B(M);
	for(int i = 0; i < M; i++) {
		cin >> B[i];
	}

	// (N × M)要素の配列を宣言
	vector<vector<int>> A(N, vector<int>(M));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A.at(i).at(j);
		}
	}

	int cnt = 0;
	for(int i = 0; i < N; i++) {
		int total = 0;
		for(int j = 0; j < M; j++) {
			total = total + A.at(i).at(j) * B.at(j);
		}
		total = total + C;

		if (total > 0) {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
