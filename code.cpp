// ABC119B
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

	vector<double> x(N);
	vector<string> u(N);
	for(int i = 0; i < N; i++) {
		cin >> x[i] >> u[i];
	}

	/*
	cout << x[0] << endl;
	cout << x[1] << endl;
	cout << u[0] << endl;
	cout << u[1] << endl;
	*/

	double Y = 0.0;
	for(int i = 0; i < N; i++) {
		if (u[i] == "JPY") {
			Y = Y + x[i];
			//cout << Y << endl;
		} else if (u[i] == "BTC") {
			Y = Y + x[i] * 380000.0;
			//cout << Y << endl;
		}
	}

	cout << Y << endl;

	return 0;
}