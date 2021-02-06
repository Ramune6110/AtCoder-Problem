// 全探索問題

//**********************************************
// 1. 問題文の通りに全探索すると解ける問題 
// ABC068B, 106B, 133B, 136B
//**********************************************

// ABC068B
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

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

using namespace std;

int count(int num);

int main()
{   
    int N;
    cin >> N;

    int cnt = 0;
    int maxcnt = 0;
    int number = 1;
    for (int i = 1; i <= N; i++) {
        cnt = count(i);
        
        if (cnt > maxcnt) {
            maxcnt = cnt;
            number = i;
        }
    }

    if (N == 1) {
        cout << 1 << endl;
    } else {
        cout << number << endl;
    }

    return 0;
}

// 2で割った回数を求める関数
int count(int num)
{
    int cnt = 0;
    while (num % 2 == 0) {
        num = num / 2;
        cnt++;
    }

    return cnt;
}

// ABC106B
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

bool solve(int num);

int main()
{   
    int N;
    cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (solve(i)) {
            sum++;
        }
    }

    cout << sum << endl;

    return 0;
}

bool solve(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    bool flag;
    if ((count == 8) && (num % 2 == 1))  {
        flag = true;
    } else {
        flag = false;
    }

    return flag;
}

// ABC133B
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
    int N, D;
    cin >> N >> D;

    // vector2次元配列
    vector<vector<int>> X(N, vector<int>(D));
    rep(i, N) {
        rep(j, D) {
            cin >> X[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int sum = 0;
            for (int k = 0; k < D; k++) {
                sum += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]);
            }

            // 小数点切り捨て
            int F = floor(sqrt(sum));
            // 小数点切り上げ
            int C = ceil(sqrt(sum));
            // 小数点切り上げ数と切り下げ数が同じならカウント
            if (F == C) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}

// ABC136B
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

    int ans = 0;
    int count = 0;
    for (int i = 1; i <= N; i++) {
        ans = digsum(i);
        if (ans % 2 == 1) {
            count++;
        }
    }

    cout <<  count << endl;

    return 0;
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

//**********************************************
// 2. あり得るものを全通り試す
// ABC105B, ABC157C
//**********************************************

// ABC105B
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

    bool flag = false;
    for (int i = 0; i <= N; i = i + 4) {
        for (int j = 0; j <= N; j = j + 7) {
            if (i + j == N) {
                flag = true;
                break;
            }
        }
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

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

// 全探索の工夫パターン
//**********************************************
// 1. 既に分かっているものは探索しない
// ABC095C,ABC112C
//**********************************************

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

//**********************************************
// 2. 探索の通り数を絞り込む
// ABC057C
//**********************************************
// ABC057C
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

long int digsum(long int num);

int main()
{
    long int N;
    cin >> N;

    long int ans = 0;
    long int digmin = digsum(N);
    // 折り返し処理のためa * aがN以下までの範囲で全探索すればOK
    for (long int a = 1; a * a <= N; a++) {
        if (N % a != 0) continue;

        long int b = N / a;

        ans = min(digmin, max(digsum(a), digsum(b)));
    }

    cout << ans << endl;

    return 0;
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
