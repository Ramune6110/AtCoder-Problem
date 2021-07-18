// ABC087A
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
	int X, A, B;
	cin >> X >> A >> B;

	int total = X - A;
	while(total > 0) {
		total -= B;
		if (total < 0) {
			total = total + B;
			break;
		}
	}

	cout << total << endl;

	return 0;
 } 