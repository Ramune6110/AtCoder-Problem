// ABC113B
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
    int N;
	cin >> N;

	int T, A;
	cin >> T >> A;

	vector<int> H(N);
	for (int i = 0; i < N; i++) {
		cin >> H[i];
	}

	vector<float> avgT(N);
	int index = 0;
	float min = 1e7;
	for (int i = 0; i < N; i++) {
		avgT[i] = (float)T - (float)H[i] * 0.006;

		if (abs(avgT[i] - (float)A) < min) {
			index = i;
			min = abs(avgT[i] - (float)A);
		}
	} 

	cout << index + 1 << endl;

	return 0;
} 