// ABC191D
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
#define FOR(i, n, m) for(int i = (int)(n); i < (int)(m); i++)
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

using ll = long long;
using namespace std;

ll in(){
	double x;
    cin >> x;
	x*=10000;
	return round(x);
}
 
bool ok(ll x,ll y,ll r){
	return x*x + y*y <= r*r;
}
 
ll num(ll x,ll y,ll z,ll lim){
	int l = 0;
	int r = 1;
	ll res = 0;
	for(int i = int(1e9)+50000;i >= lim;i -= 10000){
		while(ok(x-l*10000,i-y,z)) --l;
		while(ok(r*10000-x,i-y,z)) ++r;
		res += r-l-1;
	}
	return res;
}
 
int main(){
	ll x = in();
	ll y = in();
	ll z = in();
	x %= 10000;
	y %= 10000;
	ll ans = 0;
	ans += num(x,y,z,10000);
	ans += num(x,-y,z,0);
	cout << ans << endl;

    return 0;
}