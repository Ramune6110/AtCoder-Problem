// ABC132B
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
	int n;
	cin >> n;

	vector<int> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	int cnt = 0;
	for (int i = 0; i < n - 2; i++) {
		vector<int> v;

		v.push_back(p[i]);
		v.push_back(p[i + 1]);
		v.push_back(p[i + 2]);

		std::sort(v.begin(), v.end());

		if (p[i + 1] == v[1]) {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
