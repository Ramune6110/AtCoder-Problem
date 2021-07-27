// ABC129B
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
	
	vector<int> W(N);
	for(int i = 0; i < N; i++) {
		cin >> W[i];
	}

	int minnum = 100000;
	for(int i = 0; i < N; i++) {
		int S1 = 0;
		int S2 = 0;
		int T = i;
		for(int j = 0; j < T; j++) {
			S1 += W[j];
		}
		for(int k = T; k < N; k++) {
			S2 += W[k];
		}

		minnum = min(minnum, abs(S1 - S2));
	}

	cout << minnum << endl;

	return 0;
}
