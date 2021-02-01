// bit全探索
// 147C, 190C

// ABC147C
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
    //  15人の関係性を有効グラフで表現
    // 各nodeが取り得る値は
    // 正直者 : 1
    // 不親切 : 0
    // 何も証言がない : -1
    int g[15][15];

    int N;
    cin >> N;
    
    // 全員証言がない状態で初期化
    rep(i, N) {
        rep(j, N) {
            // 人iから人jへの証言を何も証言がない状態で初期化
            g[i][j] = -1;
        }
    }

    // 入力値0-14になるように調整している
    rep(i, N) {
        // 証言の個数
        int A;
        cin >> A;

        rep(j, A) {
            int x, y;
            cin >> x >> y;
            // 0-14にするためデクリメント
            --x;
            // 人iからxへの証言がy
            g[i][x] =y;
        }
    }

    int ans = 0;
    // bit 全探索
    // シフト演算子を使うと2^Nが簡単に計算出来る
    int n2 = 1<<N; // 全てで2^N通り
    rep(i, n2) {
        // 0か1を入れる配列：初期化は0
        vector<int> d(N);
        rep(j, N) {
            // iのj桁目が1であるか判定
            // つまりi通り目のj番目の人の証言が1かどうかの判定
            if (i>>j & 1) {
                d[j] = 1;
            }
        }

        bool flag = true;
        rep(j, N) {
            // i通り目のj番目の人の証言が正直だった場合
            if (d[j]) {
                // 人jから人kへの証言に矛盾がないかどうかを判定
                // 矛盾(正直だといっているのにg[j][k]が1でない時)がある場合, flag = false
                rep(k, N) {
                    if (g[j][k] == -1) continue;
                    if (g[j][k] != d[k]) flag = false;
                }
            }
        }

        if (flag) {
            // __builtin_popcount(i)
            // i通り目で1が立っている個数をカウントする関数
            ans = max(ans, __builtin_popcount(i));
        }
    }

    cout << ans << endl;

    return 0;
}

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
