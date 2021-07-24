// ABC128B
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

	map<string, vector<pair<int, int>>> rbc;
	for(int i = 0; i < N; i++) {
		string S;
		int P;
		cin >> S >> P;
		rbc[S].push_back(make_pair(P, i + 1));
	}

	for(auto itr = rbc.begin(); itr != rbc.end(); itr++) {
		// https://cpprefjp.github.io/reference/map/map/rbegin.html
		sort(itr->second.rbegin(), itr->second.rend());
		for(int j = 0; j < itr->second.size(); j++) {
			cout << itr->second[j].second << endl;
		}
	}
	
	return 0;
}
