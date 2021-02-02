// 全探索問題
// 1. 問題文の通りに全探索すると解ける問題 
// ABC068B, 105B, 133B, 136B

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