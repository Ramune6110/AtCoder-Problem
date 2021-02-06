// greedy_algorithm

//*************************************************************
// 貪欲法（評価値の高い順に取り込んでいくことで解を得る方法）
// https://atcoder-tags.herokuapp.com/tag_search/Greedy-Methods
// ABC160B, 153C, 176C, 138C, 123B
//*************************************************************


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

// ABC153C
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
    int N, K;
    cin >> N >> K;

    vector<ll> H(N);
    rep(i, N) {
        cin >> H[i];
    }

    sort(H.begin(), H.end());
    
    ll sum = 0;
    if (N < K) {
        cout << 0 << endl;
    } else {
        for (int i = 0; i < N - K; i++) {
            sum += H[i];
        }
        cout << sum << endl;
    }

    return 0;
}

// ABC176C
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

    vector<ll> A(N);
    rep(i, N) {
        cin >> A[i];
    }
    
    ll sum = 0;
    
    for (int i = 0; i < N - 1; i++) {
        if (A[i] == A[i + 1]) {
            sum += 0;
        } else if (A[i] > A[i + 1]) {
            sum += A[i] - A[i + 1];
            A[i + 1] = A[i + 1] + (A[i] - A[i + 1]);
        } else if (A[i] < A[i + 1]) {
            sum += 0;
        }
    }
    
    cout << sum << endl;

    return 0;
}

// ABC138C
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

    vector<float> v(N);
    rep(i, N) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    
    float average = (v[0] + v[1]) / 2.0f;
    
    for (int i = 2; i < N; i++) {
        average = (average + v[i]) / 2.0f;
    }

    cout << average << endl;

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

