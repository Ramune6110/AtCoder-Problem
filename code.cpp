// ABC130B
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
	int N, X;
	cin >> N >> X;

	vector<int> L(N);
	for (int i = 0; i < N; i++) {
		cin >> L[i];
	}

	int cnt = 1;
	int total = 0;
	for (int i = 0; i < N; i++) {
		total += L[i];
		if (total <= X) {
			cnt++;
		} else {
			break;
		}
	}

	cout << cnt << endl;
}
