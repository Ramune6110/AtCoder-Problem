// ABC116B
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
	int s;
	cin >> s;

	vector<int> a(1000000 + 10);
	a[0] = s;
	ll answer = 0;
	bool flag = false;
	for (ll i = 1; i < 1000000 + 10; i++) {
		if (a[i - 1] % 2 == 0) {
			a[i] = a[i - 1] / 2;
		} else {
			a[i] = 3 * a[i - 1] + 1;
		}
		
		for (ll j = i - 1; j >= 0; j--) {
			if (a[i] == a[j]) {
				flag = true;
				//cout << "Yes" << endl;
				//cout << a[i] << endl;
				//cout << a[j] << endl;
				answer = i;
				break;
			}
		}

		if (flag == true) break;
	}

	cout << answer + 1 << endl;

	return 0;
} 