// ABC190C
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

//  bit全探索
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> a(M), b(M);
    rep(i, M) cin >> a[i] >> b[i];

    int K;
    cin >> K;
    vector<int> C(K), D(K);
    rep(i, K) cin >> C[i] >> D[i];

    int ans = 0;
    // bit 全探索
    // シフト演算子を使うと2^Nが簡単に計算出来る
    int k2 =  1<<K; // 全てで2^K通り
    rep(s, k2) {
        vector<int> dish(N + 1);
        rep(i, K) {
            // Sのi桁目を取る : (S >> i) & 1
            // i個シフトして1の位の値を取り出す
            if ((s>>i) & 1) {
                // 1の時はDに足す
                dish[D[i]]++;
            } else {
                // 0の時はCに足す
                dish[C[i]]++;
            }
        }

        // お皿の条件を満たしている個数を数える
        int now = 0;
        rep(i, M) {
            // 何方かの条件が満たされていなければcontinue
            if (dish[a[i]] == 0) continue;
            if (dish[b[i]] == 0) continue;
            // 上記二つのcontinueをくぐり抜けたらnow++
            now++;
        }
        ans = max(ans, now);
    }

    cout << ans << endl;

    return 0;
}