// ABC095C
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

int main()
{   
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    int sum = 0;
    int ans = 1000000000;
    for (int i = 0; i <= 100000; i++) {
        sum = A * max(0, X - i) + B * max(0, Y - i) + C * (2 * i);
        ans = min(ans, sum);
    }
    
    cout << ans << endl;

    return 0;
}

// ABC112C
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

int main()
{   
    int N;
    cin >> N;

    vector<int> x(N), y(N), h(N);
    rep(i, N) {
        cin >> x[i] >> y[i] >> h[i];
    }

    // [0, 100]に座標があるのでMAXを定義
    // 縦→横の順に全探索
    int MAX = 100;
    for (int posX = 0; posX <= 100; posX++) {
        for (int posY = 0; posY <= MAX; posY++) {
            // 頂上がどれくらいの高さであってほしいか
            // 0以上は確定している時
            // -1はまだ良く分からない時
            // -2はダメだった時
            int needH = -1;

            for (int i = 0; i < N; i++) {
                if (h[i] > 0) {
                    // この頂点から見て、頂上がposX,posYの時に、どれくらいの高さがあってほしいかを求める
                    int tmp = h[i] + abs(posX - x[i]) + abs(posY - y[i]);
                    if (needH == -1) {
                        needH = tmp;
                    } else {
                        if (needH != tmp) {
                            needH = -2;
                            break;
                        }
                    }
                }
            }
            
            // ダメだったら次の場所を探す
            if (needH == -2) continue;

            for (int i = 0; i < N; i++) {
                if (h[i] == 0) {
                    // 高さが0の場合に矛盾していないか調べる
                    int tmp = h[i] + abs(posX - x[i]) + abs(posY - y[i]);
                    if (needH > tmp) {
                        needH = -2;
                        break;
                    }
                }
            }
            
            // ダメだったら次の場所を探す
            if (needH == -2) continue;

            // 見つけたら答えを返す
            cout << posX << " " << posY << " " << needH << endl;
            return 0;
        }
    }
}

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