// ABC088A
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
	int N, A;
	cin >> N >> A;

	while(N > 0) {
		N -= 500;
		if (N < 0) {
			N = N + 500;
			break;
		}
	}

	if (A >= N) {
		cout << "Yes" << endl;
	} else if (A < N) {
		cout << "No" << endl;
	}
	
	return 0;
} 