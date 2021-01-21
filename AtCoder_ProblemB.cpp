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
