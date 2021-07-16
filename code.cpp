// ABC082A
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

	int left_weight = A + B;
	int right_weight = C + D;

	if (left_weight > right_weight) {
		cout << "Left" << endl;
	} else if (left_weight == right_weight) {
		cout << "Balanced" << endl;
	} else if (left_weight < right_weight) {
		cout << "Right" << endl;
	}

    return 0;
}