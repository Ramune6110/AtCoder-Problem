// ABC102B
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

	if (N <= 111) {
		cout << 111 << endl;
	} else if (N > 111 && N <= 222) {
		cout << 222 << endl;
	} else if (N > 222 && N <= 333) {
		cout << 333 << endl;
	} else if (N > 333 && N <= 444) {
		cout << 444 << endl;
	} else if (N > 444 && N <= 555) {
		cout << 555 << endl;
	} else if (N > 555 && N <= 666) {
		cout << 666 << endl;
	} else if (N > 666 && N <= 777) {
		cout << 777 << endl;
	} else if (N > 777 && N <= 888) {
		cout << 888 << endl;
	} else if (N > 888 && N <= 999) {
		cout << 999 << endl;
	} 

	return 0;
} 