// ABC092A
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
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	int total = 0;
	if (A > B) {
		total += B;
	} else {
		total += A;
	}

	if (C > D) {
		total += D;
	} else {
		total += C;
	}

	cout << total << endl;

	return 0;
}
