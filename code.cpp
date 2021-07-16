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

	vector<ll> A(N);
	for(int i = 0; i < N; i++) {
		cin >> A[i];
	}

	// vector要素の中の最大値と最小値を抽出する関数
	// https://shunichiro.net/2019/10/01/c-vector%E3%81%8B%E3%82%89%E6%9C%80%E5%A4%A7%E5%80%A4%E3%83%BB%E6%9C%80%E5%B0%8F%E5%80%A4%E3%82%92%E5%8F%96%E5%BE%97%E3%81%99%E3%82%8B/
    ll max = *max_element(A.begin(), A.end());
    ll min = *min_element(A.begin(), A.end());
    
	cout << abs(max - min) << endl;

	return 0;
}