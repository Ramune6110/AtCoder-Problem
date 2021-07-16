// ABC112B
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

long int digsum(long int num);

int main()
{   
    int N, T;
	cin >> N >> T;

	vector<int> v;  
	vector<int> c(N);
	vector<int> t(N);

	for (int i = 0; i < N; i++) {
		cin >> c[i] >> t[i];
	}

	for (int i = 0; i < N; i++) {
		if (t[i] <= T) {
			v.push_back(c[i]);
		}
	}
	
	if (v.size() > 0) {
		// vector内の最小要素を取得
		int min = *min_element(v.begin(), v.end());
		cout << min << endl;
	} else if (v.size() == 0) {
		cout << "TLE" << endl;
	}

	return 0;
} 