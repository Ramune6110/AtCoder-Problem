// ABC124B
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

	vector<int> H(N);
	for (int i = 0; i < N; i++) {
		cin >> H.at(i);
	}

	int cnt = 1;
	for (int i = 1; i < N; i++) {
		bool flag = true;
		int temp = H[i];
		for (int j = 0; j < i; j++) {
			if (i != j) {
				if (H[j] <= temp) {

				} else {
					flag = false;
				}
			}
		}

		if (flag == true) {
			cnt++;
		}
	}

	cout << cnt << endl;
	return 0;
}
