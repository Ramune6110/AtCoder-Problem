// ABC157C
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

long int digcount(long int num);
long int dignum(long int num, long int digits);

int main()
{   
    int N, M;
    cin >> N >> M;
    
    // 桁数を数値でその時とるべき値を文字で受け取る
    vector<pair<int, char>> X(N);
    rep(i, M) {
        cin >> X[i].first >> X[i].second;
    }

    // 条件を満たすものがない場合-1を出力
    int ans = -1;
    rep(i, pow(10, N)) {
        // 数値を文字に変換
        string num = to_string(i);
        if (num.size() < N) continue;
        
        bool flag = true;
        rep(j, M) {
            if (num[X[j].first - 1] != X[j].second) {
                flag = false;
                break;
            }
        }
        
        // i = 0から考えて一番最初に条件をクリアした数値が最小の数値なのでbreak
        if (flag) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}

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

// ある整数の桁数を返す関数
long int digcount(long int num) 
{
    long int count = 0;
    while (num) {
        num = num / 10;
        count++;
    }

    return count;
}