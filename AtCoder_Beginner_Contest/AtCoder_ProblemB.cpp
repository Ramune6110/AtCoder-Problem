// ABC042B
#include<iostream>
#include<string>
#include<algorithm>
#include<stdlib.h>
using namespace std;
 
int main()
{
    string s[101];
    int a, b;
    cin >> a >> b;
    for(int i = 0; i < a; i++)
    {                                                                                                                                                                                                                                                                                                                           
        cin >> s[i];
    }
    sort(s, s+a);
    for(int i = 0; i < a; i++)
    {
        cout << s[i];
    }

    return 0;
}

// ABC043B
#include <iostream>
#include <cstring>
#include <string>
#include <regex>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

using namespace std;

int main()
{
    string s, t;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case '0':
            t.push_back('0');
            break;
        case '1':
            t.push_back('1');
            break;
        case 'B':
            if (t.empty()) {
                break;
            } else {
                t.pop_back();
                break;
            }
        default:
            break;
        }
    }

    cout << t << endl;

    return 0;
}

// ABC044B
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
#include <set>

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

using namespace std;

int main()
{
    string w;

    cin >> w;

    map<char, int> cnt;
    for (auto i : w) {
        cnt[i]++;
    }

    for (char c = 'a'; c <= 'z'; c++) {
        if (cnt[c] % 2 == 1) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

// ABC046B
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
#include <set>

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;

    long int ans = K;
    for (int i = 2; i <= N; i++) {
        ans *= K - 1;
    }

    cout << ans << endl;

    return 0;
}

// ABC047B
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

int main()
{
    int W, H, N;
    cin >> W >> H >> N;

    int x[N], y[N], a[N];
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i] >> a[i];
    }

    int Width = 0;
    int Height = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] == 1) {
            if (Width <= x[i]) {
                Width = x[i];
            }
        } else if (a[i] == 2) {
            if (W >= x[i]) {
                W = x[i];
            }
        } else if (a[i] == 3) {
            if (Height <= y[i]) {
                Height = y[i];
            }
        } else if (a[i] == 4) {
            if (H >= y[i]) {
                H = y[i];
            }
        }
    }

    if ((W - Width > 0) && (H - Height > 0)) {
        cout << (W - Width) * (H - Height)  << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}

// ABC0049B
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

int main()
{
    int H, W;
    cin >> H >> W;
    char pixel[H][W];
    char longpixel[2 * H][W];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> pixel[i][j];
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << pixel[i][j];
        }
        cout << endl;
        for (int j = 0; j < W; j++) {
            cout << pixel[i][j];
        }
        cout << endl;
    }

    return 0;
}

// ABC050B
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

int main()
{
    int N;
    cin >> N;

    vector<int> T(N);
    for (int i = 1; i <= N; i++) {
        cin >> T[i - 1];
    }

    int M;
    cin >> M;

    vector<int> P(M), X(M);
    for (int i = 1; i <= M; i++) {
        cin >> P[i - 1] >> X[i - 1];
    }

    int temp, index;
    for (int i = 1; i <= M; i++) {
        index    = P[i - 1] - 1;
        temp     = T[index];
        T[index] = X[i - 1];
        int sum  = accumulate(T.begin(), T.end(), 0);
        cout << sum << endl;
        T[index] = temp;
    }

    return 0;
}

// ABC051B
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

int main()
{
    int K, S;
    cin >> K >> S;

    int sum = 0;
    for (int x = 0; x <= K; x++) {
        for (int y = 0; y <= K; y++) {
            int z = S - x - y;
            if ((z >= 0) && (z <= K)) {
                sum += 1;
            }
        }
    }

    cout << sum << endl;

    return 0;
}

// ABC052B
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

int main()
{
    int x = 0;
    int maxnum = 0;
    int N;
    string S;
    cin >> N >> S;

    for (int i = 0; i < N; i++) {
        if (S[i] == 'I') {
            x++;
        } else if (S[i] == 'D') {
            x--;
        }

        if (x >= maxnum) {
            maxnum = x;
        }
    }

    cout << maxnum << endl;

    return 0;
}

// ABC053B
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

int main()
{
    string s;
    cin >> s;

    long int  minA = 200000, maxZ = 0;
    for (long int i = 0; i < s.length(); i++) {
        if (s[i] == 'A') {
            if (minA > i) {
                minA = i;
            }
        }

        if (s[i] == 'Z') {
            if (maxZ < i) {
                maxZ = i;
            }
        }
    }

    cout << (maxZ - minA + 1) << endl;

    return 0;
}

// ABC054B
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

int main()
{
    int N, M;
    char A[50][50], B[50][50];
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cin >> B[i][j];
        }
    }

    bool flag = false;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((i + M -1 >= N) || (j + M - 1 >= N)) {
                continue;
            }

            bool match = true;
            for (int x = 0; x < M; x++) {
                for (int y = 0; y < M; y++) {
                    if (A[i + x][j + y] != B[x][y]) {
                        match = false;
                    }
                }
            }

            if (match) {
                flag = true;
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

// ABC056B
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

int main() 
{
    int W, a, b;
    cin >> W >> a >> b;

    int A = a + W;
    int B = b;
    int C = a;
    int D = b + W;

    if (A < B) {
        cout << B - A << endl;
    } else if (C > D) {
        cout << C -D << endl;
    } else if ((A > B) || (C < D) || (A == B) || (C == D)) {
        cout << 0 << endl;
    }

    return 0;
}

// ABC057B
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

int main()
{   
    int N, M;
    cin >> N >> M;

    long int a[N], b[N], c[M], d[M];
    for (int i = 1; i <= N; i++) {
        cin >> a[i - 1] >> b[i - 1];
    }
    for (int i = 1; i <= M; i++) {
        cin >> c[i - 1] >> d[i - 1];
    }

    int index[N];
    int mand = 0;
    for (int i = 1; i <= N; i++) {
        int mind = 1000000000;
        int num = 1000000000;
        for (int j = 1; j <= M; j++) {
            mand = abs(a[i - 1] - c[j - 1]) + abs(b[i - 1] - d[j - 1]);
            if (mind > mand) {
                num = j;
                mind = mand;
            } 
            if (mind == mand) {
                num = min(num, j);
            }
        }

        index[i - 1] = num;
    }

    for (int i = 1; i <= N; i++) {
        cout << index[i - 1] << endl;
    }

    return 0;
}

// ABC061B
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

int main()
{   
    int N, M;
    cin >> N >> M;

    int a[M], b[M];
    for (int i = 1; i <= M; i++) {
        cin >> a[i - 1] >> b[i - 1];
    }

    int num[N] = {0};
    for (int i = 1; i <= M; i++) {
        num[a[i - 1] - 1]++;
        num[b[i - 1] - 1]++;
    }

    for (int i = 1; i <= N; i++) {
        cout << num[i - 1] << endl;
    }

    return 0;
}

// ABC062B
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

int main()
{   
    int H, W;
    cin >> H >> W;

    char a[H][W];
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> a[i - 1][j - 1];
        }
    }

    char ans[H + 2][W + 2];
    for (int i = 1; i <= H + 2; i++) {
        for (int j = 1; j <= W + 2; j++) {
            if ((i == 1) || (i == H + 2)) {
                ans[i - 1][j - 1] = '#';
            } else {
                if (j == 1) {
                    ans[i - 1][j - 1] = '#';
                }
                if (j == W + 2) {
                    ans[i - 1][j - 1] = '#';
                }
            }
        }

        for (int j = 2; j <= W + 1; j++) {
            ans[i][j - 1] = a[i - 1][j - 2];
        }
    }

    for (int i = 1; i <= H + 2; i++) {
        for (int j = 1; j <= W + 2; j++) {
            cout << ans[i - 1][j - 1];
        }
        cout << endl;
    }
    
    return 0;
}

// ABC064B
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

int main()
{   
    int N;
    cin >> N;

    int a[N];
    for (int i = 1; i <= N; i++) {
        cin >> a[i - 1];
    }

    sort(a, a + N);

    cout << abs(a[0] - a[N - 1]) << endl;

    return 0;
}

// ABC067B
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

int main()
{   
    int N, K;
    cin >> N >> K;

    int l[N];
    for (int i = 1; i <= N; i++) {
        cin >> l[i - 1];
    }

    sort(l, l + SIZE_OF_ARRAY(l));

    int sum = 0;
    for (int i = 1; i <= K; i++) {
        sum = sum + l[SIZE_OF_ARRAY(l) - i];
    }

    cout << sum << endl;

    return 0;
}

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

// ABC070B
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

int main()
{   
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int minsec;
    int maxsec;
    minsec = max(A, C);
    maxsec = min(B, D);

    if ((maxsec - minsec) > 0) {
        cout << maxsec - minsec << endl;
    } else if ((maxsec - minsec) <= 0) {
        cout << 0 << endl;
    }

    return 0;
}

// ABC072B
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

int main()
{   
    string S;
    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        if ((i % 2) == 0) {
            cout << S[i];
        }
    }
    cout << endl;

    return 0;
}

// ABC073B
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

int main()
{   
    int N;
    cin >> N;

    int l[N], r[N];
    for (int i = 1; i<= N; i++) {
        cin >> l[i - 1] >> r[i - 1];
    }

    int num = 0;
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        num = abs(l[i - 1] - r[i - 1]) + 1;
        sum = sum + num;
    }

    cout << sum << endl;

    return 0;
}

// ABC075B
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

int main()
{   
    int H, W;
    cin >> H >> W;
    vector<string> V(H);
    for (int i = 0; i < H; i++) {
        cin >> V.at(i);
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (V.at(i).at(j) == '#') continue;
            int count = 0;
            for (int k = i - 1; k < i + 2; k++) {
                for (int l = j - 1; l < j + 2; l++) {
                    if (k < 0 || l < 0 || k > H - 1 || l > W - 1 || (k == i && l == j)) continue;
                    if (V.at(k).at(l) == '#') count++;
                }
            }
            V.at(i).at(j) = count + '0';
        }
    }
    
    for (int i = 0; i < H; i++) {
        cout << V.at(i) << endl;
    }

    return 0;
}

// ABC076B
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

int main()
{   
    int N, K;
    cin >> N >> K;

    int ans = 1;
    for (int i = 1; i <= N; i++) {
        if ((ans * 2) > (ans + K)) {
            ans = ans + K;
        } else if ((ans * 2) < (ans + K)) {
            ans *= 2;
        } else if ((ans * 2) == (ans + K)) {
            ans = ans + K;
        }
    }

    cout << ans << endl;

    return 0;
}

// ABC077B
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

int main()
{   
    long int N;
    cin >> N;

    long int ans;
    for (long int i = 1; i <= N; i++) {
        if ((i * i) < N) {

        } else if ((i * i) == N) {
            ans = N;
            break;
        } else if ((i * i) > N) {
            ans = (i - 1) * (i - 1);
            break;
        }
    }

    cout << ans << endl;

    return 0;
}

// ABC079B
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

int main() 
{
    int N;
    cin >> N;

    long int L[N];
    L[0] = 2;
    L[1] = 1;
    for (int i = 2; i <= N; i++) {
        L[i] = L[i - 1] + L[i - 2];
    }

    cout << L[N] << endl;

    return 0;
}

// ABC080B
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

long int digsum(long int num);

int main()
{
    long int N;
    cin >> N;

    long int sum;
    sum = digsum(N);

    if (N % sum == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

// 整数の各桁の数字とその和を出す関数
long int digsum(long int num) 
{
    long int dig = 0;
    long int sum = 0;
    while (num) {
        dig = num % 10;
        sum = sum + dig;
        num = num / 10;
    }

    return sum;
}

// ABC081B
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

bool divide_by_two(int A[], int N);

int main() 
{
    int N;
    cin >> N;

    int A[N];
    for (int i = 1; i <= N; i++) {
        cin >> A[i - 1];
    }
    
    int cnt = 0;
    bool flag = true;
    while (flag) {
        flag = divide_by_two(A, N);

        for (int i = 1; i <= N; i++) {
            A[i - 1] = A[i - 1] / 2;
        }

        cnt++;
    }

    cout << cnt - 1 << endl;

    return 0;
}

// 全ての数が2で割れるかを判定する関数
bool divide_by_two(int A[], int N) {
    bool flag = false;
    for (int i = 1; i <= N; i++) {
        if (A[i - 1] % 2 == 0) {
            flag = true;
        } else {
            flag = false;
            break;
        }
    }

    return flag;
}

// ABC083B
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

int digsum(int num);

int main() 
{
    int N, A, B;
    cin >> N >> A >> B;

    int sum = 0;
    int numsum = 0;
    for (int i = 1; i <= N; i++) {
        sum = digsum(i);

        if ((sum >= A) && (sum <= B)) {
            numsum = numsum + i;
        }
    }
    
    cout << numsum << endl;

    return 0;
}

// 整数の各桁の数字とその和を出す関数
int digsum(int num) 
{
    int dig = 0;
    int sum = 0;
    while (num) {
        dig = num % 10;
        sum = sum + dig;
        num = num / 10;
    }

    return sum;
}

// ABC085B
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

    vector<int> d(N);
    rep(i, N) {
        cin >> d[i];
    }

    sort(d.begin(), d.end());

    int sum = 0;
    rep(i, N) {
        // sort処理
        sort(d.begin(), d.end());
        // 最後の要素にアクセス
        // cout << d[d.size() - 1] << endl;
        if ((d.size() > 0) && (d[d.size() - 1] > 0)) {
            // 最も値の大きい要素を削除
            vector<int>::iterator e = remove(d.begin(), d.end(), d[d.size() - 1]);
            // 不要な要素を消去
            d.erase(e, d.end());
            sum++;
        } else {
            break;
        }
    }

    cout << sum << endl;

    return 0;
}

// ABC086B
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

int string_to_convert_num(int a, int b);
bool is_squere(long long N);

int main()
{
    int a, b, num;
    cin >> a >> b;

    num = string_to_convert_num(a, b);

    if (is_squere(num)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

// 平方数かどうかの判定
bool is_squere(long long N) 
{
    long long r = (long long)floor(sqrt((long double)N));  // 切り捨てした平方根
    return (r * r) == N;
}

// 文字列を連結して数値に変換
int string_to_convert_num(int a, int b)
{
    //  数値を文字列で連結
    ostringstream ss;
    ss << a << b;

    string str;
    str = str + ss.str();
    
    // 文字列を数値に変換
    istringstream si;
    si = istringstream(str);
    int num = atoi(str.c_str());
    si >> num;

    return num;
}

// ABC088B
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

int main()
{
    int N;
    cin >> N;

    int a[N];
    for (int i = 1; i <= N; i++) {
        cin >> a[i - 1];
    }

    // 配列を降順にソートする
    sort(a, a + SIZE_OF_ARRAY(a), greater<int>());

    int alice = 0;
    int bob = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            alice = alice + a[i];
        } else {
            bob = bob + a[i];
        }
    }
    
    cout << alice - bob << endl;

    return 0;
}

// ABC090B
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

int main()
{
    int A, B;
    cin >> A >> B;

    int sum = 0;
    for (int i = A; i <= B; i++) {
        // 数値を文字列に変換
        string str = to_string(i);
        if ((str[0] == str[4]) && (str[1] == str[3])) {
            sum++;
        }
    }

    cout << sum << endl;

    return 0;
}

// ABC092B
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

int main()
{
    int N, D, X;
    cin >> N >> D >> X;

    vector<int> A(N);
    for (int i = 1; i <= N; i++) {
        cin >> A.at(i - 1);
    }

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += 1 + (D - 1) / A.at(i - 1);
    }

    cout << sum + X << endl;

    return 0;
}
// ABC093B
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

int main()
{
    long int A, B;
    int K;
    cin >> A >> B >> K;

    for (int i = A; i < A + K && i <= B; i++) {
        cout << i << endl;
    }
    for (int i = max(B - K + 1, A + K); i <= B; i++) {
        cout << i << endl;
    }

    return 0;
}

// ABC094B
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

int main()
{
    int N, M, X;
    cin >> N >> M >> X;

    vector<int> A(M);
    for (int i = 1; i <= M; i++) {
        cin >> A.at(i - 1);
    }

    int countlow = 0;
    int counthigh = 0;
    for (int i = 1; i <= M; i++) {
        if (A.at(i - 1) < X) {
            countlow++;
        } else {
            counthigh++;
        }
    }

    cout << min(countlow, counthigh) << endl;

    return 0;
}

// ABC096B
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

int main()
{
    int num[3];
    for (int i = 1; i <= 3; i++) {
        cin >> num[i - 1];
    }

    int K;
    cin >> K;

    sort(num, num + 3);

    int sum = 0;
    for (int i = 1; i <= K; i++) {
        num[2] = 2 * num[2];
    }

    sum = num[0] + num[1] + num[2];

    cout << sum << endl;

    return 0;
}

// ABC097B
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
    int X;
    cin >> X;

    // ある整数以下で最大のべき乗数を求める
    int ans = 1;
    for (int i = 2; i <= X; i++) {
        for (int j = 2; j <= X; j++) {
            if (pow(i, j) > X) break;
            ans = max(ans, (int)pow(i, j));
        }
    }

    cout << ans << endl;

    return 0;
}

// ABC099B
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
    int a, b;
    cin >> a >> b;

    int height_W = 0;
    int height_E = 0;
    for (int i = 1; i <= 999; i++) {
        height_W = height_W + i;
        height_E = height_W + (i + 1);

        bool flag = false;
        if ((b - a) == (height_E - height_W)) {
            flag = true;
        }

        if (flag) break;
    }

    cout << (height_W - a) << endl;

    return 0;
}

// ABC100B
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
    int D, N;
    cin >> D >> N;
    
    // 100でD回割れるN番目の数
    long int ans = pow(100, D) * N;
    
    // なんで？
    if (N == 100) {
        ans += pow(100, D);
    }

    cout << ans << endl;

    return 0;
} 

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

// ABC111B
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

	if (N <= 111) {
		cout << 111 << endl;
	} else if (N > 111 && N <= 222) {
		cout << 222 << endl;
	} else if (N > 222 && N <= 333) {
		cout << 333 << endl;
	} else if (N > 333 && N <= 444) {
		cout << 444 << endl;
	} else if (N > 444 && N <= 555) {
		cout << 555 << endl;
	} else if (N > 555 && N <= 666) {
		cout << 666 << endl;
	} else if (N > 666 && N <= 777) {
		cout << 777 << endl;
	} else if (N > 777 && N <= 888) {
		cout << 888 << endl;
	} else if (N > 888 && N <= 999) {
		cout << 999 << endl;
	} 

	return 0;
} 

// ABC112B
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
    int N, T;
	cin >> N >> T;

	vector<int> v;  
	vector<int> c(N);
	vector<int> t(N);

	for (int i = 0; i < N; i++) {
		cin >> c[i] >> t[i];
	}

	for (int i = 0; i < N; i++) {
		if (t[i] <= T) {
			v.push_back(c[i]);
		}
	}
	
	if (v.size() > 0) {
		// vector内の最小要素を取得
		int min = *min_element(v.begin(), v.end());
		cout << min << endl;
	} else if (v.size() == 0) {
		cout << "TLE" << endl;
	}

	return 0;
} 

// ABC113B
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

	int T, A;
	cin >> T >> A;

	vector<int> H(N);
	for (int i = 0; i < N; i++) {
		cin >> H[i];
	}

	vector<float> avgT(N);
	int index = 0;
	float min = 1e7;
	for (int i = 0; i < N; i++) {
		avgT[i] = (float)T - (float)H[i] * 0.006;

		if (abs(avgT[i] - (float)A) < min) {
			index = i;
			min = abs(avgT[i] - (float)A);
		}
	} 

	cout << index + 1 << endl;

	return 0;
} 

// ABC114B
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
    string S;
	cin >> S;
    
	int minnum = 10000;
	for (int i = 0; i < S.length() - 2; i++) {
		string sub = S.substr(i, 3);
		// 文字列から数字型へ変換
		// https://qiita.com/MasahiroBW/items/3f56b22a079cd3272cd3
		int num;
		istringstream number;

		number = istringstream(sub);
		number >> num;

		if (abs(num - 753) < minnum ) {
			minnum = abs(num - 753);
		}
	}

	cout << minnum << endl;

	return 0;
} 

// ABC115B
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

	vector<int> p(N);
	for (int i = 0; i < N; i++) {
		cin >> p[i];
	}

	// vector要素の中の最大値と最小値を抽出する関数
	// https://shunichiro.net/2019/10/01/c-vector%E3%81%8B%E3%82%89%E6%9C%80%E5%A4%A7%E5%80%A4%E3%83%BB%E6%9C%80%E5%B0%8F%E5%80%A4%E3%82%92%E5%8F%96%E5%BE%97%E3%81%99%E3%82%8B/
    int max = *max_element(p.begin(), p.end());

    // vextor内の特定の要素のindexを算出
	// https://www.cns.s.u-tokyo.ac.jp/~masuoka/post/search_vector_index/
	vector<int>::iterator itr;
    itr = find(p.begin(), p.end(), max);
    const int index = distance(p.begin(), itr);
    
	// 合計金額の算出
	int totalcost = 0;
	for (int i = 0; i < N; i++) {
		if (i == index) {
			p[i] = p[i] / 2;
		}
		totalcost += p[i];
	}

	cout << totalcost << endl;

	return 0;
} 

// ABC116B
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
	int s;
	cin >> s;

	vector<int> a(1000000 + 10);
	a[0] = s;
	ll answer = 0;
	bool flag = false;
	for (ll i = 1; i < 1000000 + 10; i++) {
		if (a[i - 1] % 2 == 0) {
			a[i] = a[i - 1] / 2;
		} else {
			a[i] = 3 * a[i - 1] + 1;
		}
		
		for (ll j = i - 1; j >= 0; j--) {
			if (a[i] == a[j]) {
				flag = true;
				//cout << "Yes" << endl;
				//cout << a[i] << endl;
				//cout << a[j] << endl;
				answer = i;
				break;
			}
		}

		if (flag == true) break;
	}

	cout << answer + 1 << endl;

	return 0;
} 

// ABC117B
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

	vector<int> L(N);
	for (int i = 0; i < N; i++) {
		cin >> L[i];
	}

	sort(L.begin(), L.end());

	int sum = 0;
	for (int i = 0; i < L.size() - 1; i++) {
		sum += L[i];
	}

	if (sum > L[L.size() - 1]) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
} 

// ABC118B
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
	int N, M;
	cin >> N >> M;
	
	vector<int> ans(M + 1);
	for (int i = 0; i < N; i++) {
		int K, index;
		cin >> K;
		for (int j = 0; j < K; j++) {
			cin >> index;
			ans[index - 1]++;
		}
	}

	int count = 0;
	for (int i = 0; i < M; i++) {
		if (ans[i] == N) {
			count++;
		}
	}

	cout << count << endl;
	
	return 0;
}

// ABC119B
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

	vector<double> x(N);
	vector<string> u(N);
	for(int i = 0; i < N; i++) {
		cin >> x[i] >> u[i];
	}

	/*
	cout << x[0] << endl;
	cout << x[1] << endl;
	cout << u[0] << endl;
	cout << u[1] << endl;
	*/

	double Y = 0.0;
	for(int i = 0; i < N; i++) {
		if (u[i] == "JPY") {
			Y = Y + x[i];
			//cout << Y << endl;
		} else if (u[i] == "BTC") {
			Y = Y + x[i] * 380000.0;
			//cout << Y << endl;
		}
	}

	cout << Y << endl;

	return 0;
}

// ABC120B
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

int gcd(int x, int y, int K);

int main()
{
	int A, B, K;
	cin >> A >> B >> K;

	int num = gcd(A, B, K);

	cout << num << endl;

	return 0;
}

// 最大公約数を求める関数
// https://qiita.com/akilax/items/d28aacbcd0836de2eea7
int gcd(int x, int y, int K) {
    int m = min(x, y);
	int count = 0;
    for(int d = m; d > 0; d--) {
        if(x % d == 0 && y % d == 0) {
			count++;
			if (count == K) {
				return d;
			}
        }
    }
}

// ABC121B
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
	int N, M, C;
	cin >> N >> M >> C;

	vector<int> B(M);
	for(int i = 0; i < M; i++) {
		cin >> B[i];
	}

	// (N × M)要素の配列を宣言
	vector<vector<int>> A(N, vector<int>(M));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A.at(i).at(j);
		}
	}

	int cnt = 0;
	for(int i = 0; i < N; i++) {
		int total = 0;
		for(int j = 0; j < M; j++) {
			total = total + A.at(i).at(j) * B.at(j);
		}
		total = total + C;

		if (total > 0) {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}

// ABC123B
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
    int N = 5;

    vector<int> time(N);
    rep(i, N) {
        cin >> time[i];
    }

    vector<int> nexttime(N);
    rep(i, N) {
        if (time[i] % 10 == 0) {
            nexttime[i] = time[i];
        } else {
            nexttime[i] = time[i] - time[i] % 10 + 10;
        }
    }
    
    int mintime = 1000000000;
    rep(i, N) {
        int sumtime = 0;
        rep(j, N) {
            if (i == j) {
                sumtime += time[i];
            } else {
                sumtime += nexttime[j];
            }
        }
        
        mintime = min(mintime, sumtime);
    }

    cout << mintime << endl;

    return 0;
} 

// ABC124B
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

	vector<int> H(N);
	for (int i = 0; i < N; i++) {
		cin >> H.at(i);
	}

	int cnt = 1;
	for (int i = 1; i < N; i++) {
		bool flag = true;
		int temp = H[i];
		for (int j = 0; j < i; j++) {
			if (i != j) {
				if (H[j] <= temp) {

				} else {
					flag = false;
				}
			}
		}

		if (flag == true) {
			cnt++;
		}
	}

	cout << cnt << endl;
	return 0;
}

// ABC125B
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

	vector<int> C(N);
	vector<int> V(N);
	for (int i = 0; i < N; i++) {
		cin >> V.at(i);
	}
	for (int i = 0; i < N; i++) {
		cin >> C.at(i);
	}

	vector<int> dp(N);
	dp[0] = 0;
	for (int i = 1; i <= N; i++) {
		dp[i] = max(dp[i - 1], dp[i - 1] + V[i - 1] - C[i - 1]);
	}

	cout << dp[N] << endl;

	return 0;
}

// ABC127B
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
	int r, D, x;
	cin >> r >> D >> x;

	vector<int> X(10);
	X[0] = x;
	for (int i = 1; i <= 10; i++) {
		X[i] = r * X[i - 1] - D;
		cout << X[i] << endl;
	}

	return 0;
}

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

// ABC129B
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
	
	vector<int> W(N);
	for(int i = 0; i < N; i++) {
		cin >> W[i];
	}

	int minnum = 100000;
	for(int i = 0; i < N; i++) {
		int S1 = 0;
		int S2 = 0;
		int T = i;
		for(int j = 0; j < T; j++) {
			S1 += W[j];
		}
		for(int k = T; k < N; k++) {
			S2 += W[k];
		}

		minnum = min(minnum, abs(S1 - S2));
	}

	cout << minnum << endl;

	return 0;
}

// ABC130B
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
	int N, X;
	cin >> N >> X;

	vector<int> L(N);
	for (int i = 0; i < N; i++) {
		cin >> L[i];
	}

	int cnt = 1;
	int total = 0;
	for (int i = 0; i < N; i++) {
		total += L[i];
		if (total <= X) {
			cnt++;
		} else {
			break;
		}
	}

	cout << cnt << endl;
}

// ABC132B
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
	int n;
	cin >> n;

	vector<int> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	int cnt = 0;
	for (int i = 0; i < n - 2; i++) {
		vector<int> v;

		v.push_back(p[i]);
		v.push_back(p[i + 1]);
		v.push_back(p[i + 2]);

		std::sort(v.begin(), v.end());

		if (p[i + 1] == v[1]) {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
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

// ABC138B
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

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    double total = 0.0;
    for (int i = 0; i < N; i++) {
        total += (double) (1.0 / A[i]);
    }

    cout << (double) (1.0 / total) << endl;

    return 0;
}

// ABC140B
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

    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N - 1);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < N - 1; i++) {
        cin >> C[i];
    }

    int total = 0;
    int prev  = 0;
    for (int i = 0; i < N; i++) {
        total += B[A[i] - 1];

        if (prev == A[i] - 1) {
            total += C[prev - 1];
        }
        prev = A[i];
    }

    cout << total << endl;

    return 0;
}

// ABC142B
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
    int N, K;
    cin >> N >> K;

    vector<int> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (h[i] >= K) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}

// ABC144B
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

    bool flag = false;
    for (int i = 1; i <= 9; i++) {
        if (N % i == 0) {
            int ans = N / i;
            if ((ans >= 1) && (ans <= 9)) {
                flag = true;
            }
        }
    }

    if (flag == false) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}

// ABC145B
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

    string S;
    cin >> S;
 
    bool flag = false;
    if (N % 2 == 0) {
        for (int i = 0; i < N / 2; i++) {
            if (S[i] == S[i + N / 2]) {
                flag = true;
            } else {
                flag = false;
                break;
            }   
        }
    } else {
        flag = false;
    }
    
    if (flag == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}

// ABC146B
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

    string S;
    cin >> S;

    for (int i = 0; i < S.length(); i++) {
        S.at(i) += N;
        if (S.at(i) > 'Z') {
            S.at(i) -= 26;
        }
    }

    cout << S << endl;

    return 0;
}

// ABC149B
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
    ll A, B, K;
    cin >> A >> B >> K;

    /*
    ll num = (A - 1) - K;
    if (A >= 1 && num >= 0) {
        A -= K;
    } else {
        num = K - A;
        A = 0;
    }

    ll numb = (B - 1) - num;
    if (A < 1 && B >= 1 && numb >= 0) {
        B -= num;
    } else {
        B = 0;
    }

    if (A == 0) {
        A = 0;
    } else if (B == 0) {
        B = 0;
    }
    */
   
    ll num = min(A, K);
    A = A - num;
    K = K - num;
    B = B - min(B, K);

    cout << A << " " <<  B << endl;

    return 0;
}

// ABC151B
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
    int N, K, M;
    cin >> N >> K >> M;

    vector<int> A(N - 1);
    for (int i = 0; i < N - 1; i++) {
        cin >> A[i];
    }

    int ans = 0;
    int total = M * N - std::accumulate(A.begin(), A.end(), 0);
    if (total >= 0 && total <= K) {
        ans = total;
    } else if (total < 0) {
        ans = 0;
    } else if (total > K) {
        ans = -1;
    }

    cout << ans << endl;

    return 0;
}

// ABC160B
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
    int X;
    cin >> X;

    int num500 = X / 500;
    X = X - num500 * 500;
    int num5 = X / 5;
    X = X - num5 * 5;

    cout << 1000 * num500 + 5 * num5 << endl;

    return 0;
}

// ABC190B
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

int main()
{
    int N;
    long int S, D;
    cin >> N >> S >> D;

    long int X[N], Y[N];
    for (int i = 1; i <= N; i++) {
        cin >> X[i - 1] >> Y[i - 1];
    }

    long int sum = 0;
    bool flag = false;
    for (int i = 1; i <= N; i++) {
        if ((X[i - 1] >= S) || (Y[i - 1] <= D)) {
            flag = false;
        } else {
            flag = true;
            break;
        }
    }

    if (flag == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

// ABC191B
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
    int N, X;
    cin >> N >> X;

    vector<int> A(N);
    rep(i, N) {
        cin >> A[i];
    }

    // X を削除
    vector<int>::iterator e = remove(A.begin(), A.end(), X);
    // 不要な要素を消去
    A.erase(e, A.end());

    rep(i, A.size()) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
} 