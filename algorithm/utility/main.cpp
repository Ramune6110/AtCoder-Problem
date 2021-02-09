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

using namespace std;
using ll=long long;
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<=n;i++)
#define reps(i,j,n) for(ll i=j;i<n;i++)
#define bit(i,n) for(ll i=0;i<(1<<n);i++)
#define dbl(i) fixed << setprecision(15) << i << endl;
#define all(a) a.begin(),a.end()
#define gcd __gcd
#define Unweightgraph vector<vector<ll>>
#define st(a) sort(a.begin(),a.end());
using vl =vector<ll>;
using vi =vector<int>;
using vs =vector<string>;
using vpl =vector<pair<ll,ll>>;
const ll mod = 1000000007;
template <typename T>

//========================================================================================
//                                       整数
//========================================================================================
//---------------------------------------------------------------
// 約数列挙
//---------------------------------------------------------------
vector<ll> enum_divisors(ll N) {
    vector<ll> res;
    for (ll i = 1; i * i <= N; ++i) {
        if(N % i == 0) {
            res.push_back(i);
            if (N/i != i) res.push_back(N/i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}

//---------------------------------------------------------------
// 素数チェック
//---------------------------------------------------------------
bool prime(int a){
    if(a<=1)return false;
    for(int i=2;i*i<=a;i++){
        if(a%i==0)return false;
    }
    return true;
}

//---------------------------------------------------------------
// 整数の桁
//---------------------------------------------------------------
// 各桁の値を算出
long int dignum(long int num, long int digits) 
{
    long int dig = 0;

    for (int i = 1; i <= digits; i++) {
        dig = num % 10;
        num = num / 10;
    }

    return dig;
}

// ある整数の割れる回数を返す関数
long int digcount(long int num) 
{
    long int count = 0;
    while (num) {
        num = num / 10;
        count++;
    }

    return count;
}

// ある整数の桁数を返す関数(各桁の和も算出)
long int digsum(long int num) 
{
    long int dig = 0;
    long int sum = 0;
    long int count = 0;
    while (num) {
        dig = num % 10;
        sum = sum + dig;
        num = num / 10;
        count++;
    }

    return count;
}

/* 小数点n以下で四捨五入する */
double round_n(double number, double n)
{
    number = number * pow(10,n-1); //四捨五入したい値を10の(n-1)乗倍する。
    number = round(number); //小数点以下を四捨五入する。
    number /= pow(10, n-1); //10の(n-1)乗で割る。
    return number;
}

//---------------------------------------------------------------
// 最大公約数（ユークリッドの互除法）
//---------------------------------------------------------------
ll gcd(ll a, ll b) {
    if (a < b) { ll tmp = a;	a = b; b = tmp; }
    ll r = a % b;
    while (r != 0) { a = b; b = r; r = a % b; }
    return b;
}

//---------------------------------------------------------------
// 最小公倍数
//---------------------------------------------------------------
ll lcm(ll a,ll b){
    ll d = gcd(a,b);
    return a/d*b;
}

//---------------------------------------------------------------
// aのn乗
//---------------------------------------------------------------
//aのn乗(繰り返し二乗法)
ll rui(ll a, ll n){
    ll x = 1;
    while(n > 0){//全てのbitが捨てられるまで。
        if(n&1){//1番右のbitが1のとき。
        x = x*a;
        }
        a = a*a;
        n >>= 1;//bit全体を右に1つシフトして一番右を捨てる。
    }
    return x;
}

//xのn乗(mod)
long long mpow(long long x, long long n,ll m) {
    ll ret=1;
    while (n > 0) {
        if (n & 1) ret =ret*x % m;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x = x * x % m;
        n >>= 1;  // n を1bit 左にずらす
    }
    return ret;
}

//---------------------------------------------------------------
// 階乗
//---------------------------------------------------------------
ll kai(ll a){
    ll ans=1;
    for(ll i=2;i<=a;i++){
        ans*=i;
    }
    return ans;
}

//mod階上
ll mkai(ll a){
    if(a==1)return 1;
    else return a*kai(a-1)%mod;
}

//---------------------------------------------------------------
// nCr(組み合わせ)
//---------------------------------------------------------------
vector<vector<ll>> comb(int n, int r) {
    vector<vector<ll>> v(n + 1,vector<ll>(n + 1, 0));
    for (int i = 0; i < v.size(); i++) {
        v[i][0] = 1;
        v[i][i] = 1;
    }
    for (int j = 1; j < v.size(); j++) {
        for (int k = 1; k < j; k++) {
        v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
        }
    }
    return v;
}

//nCr (mod)
ll mcomb(ll n,ll x,ll mod){
    ll res;
    ll a=1;
    for(ll i=0;i<x;i++){
        a=a*n%mod;
        n--;
    }
    ll b=1;
    for(ll i=1;i<x+1;i++)
    {
        b=b*i%mod;
    }
    res=(a*mpow(b,mod-2,mod))%mod;
    return res;
}

//φ関数(1からnまでのうちnと互いな素な個数)
ll phi(ll n){
    ll ret =n;
    for(ll i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            ret -= ret / i;
            while(n % i == 0) n /= i;
        }
    }
    if(n>1)ret -=ret/n;
    return ret;
}

//拡張ユークリッド互助法
ll extGCD(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll d = extGCD(b, a%b, y, x); // 再帰的に解く
    y -= a / b * x;
    return d;
}

//---------------------------------------------------------------
// 素因数分解
//---------------------------------------------------------------
vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

//---------------------------------------------------------------
// ワーシャルフロイド法
//---------------------------------------------------------------
//ワーシャルフロイド法(iからjに行くまでの最小コスト計算,nは要素数,dはコスト表)
void warshall_floyd(int n,vector<vector<ll>> &d){
    for (int k = 0; k < n; k++){       // 経由する頂点
        for (int i = 0; i < n; i++) {    // 始点
            for (int j = 0; j < n; j++) {  // 終点
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

//---------------------------------------------------------------
// エラトステネスのふるい
//---------------------------------------------------------------
//エラトステネスのふるい(n以下の素数列挙)
vector<ll> eratosthenes( const ll N ){
    vector<bool> is_prime( N + 1 );
    for( ll i = 0; i <= N; i++ )
    {
        is_prime[ i ] = true;
    }
    vector<ll> P;
    for( ll i = 2; i <= N; i++ )
    {
        if( is_prime[ i ] )
        {
            for( ll j = 2 * i; j <= N; j += i )
            {
                is_prime[ j ] = false;
            }
            P.emplace_back( i );
        }
    }
    return P;
}

//エラトステネスのふるい(素数チェック)
vector<bool> eratosthenescheck( const ll N ){
    vector<bool> is_prime( N + 1 );
    for( ll i = 0; i <= N; i++ )
    {
        is_prime[ i ] = true;
    }
    for( ll i = 2; i <= N; i++ )
    {
        if( is_prime[ i ] )
        {
            for( ll j = 2 * i; j <= N; j += i )
            {
                is_prime[ j ] = false;
            }
        }
    }
    return is_prime;
}