// ABC201B
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

    vector<string> S(N);
    vector<int> T(N);
    vector<int> dammy_T(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i] >> T[i];
        dammy_T[i] = T[i];
    }

    // 降順ソート
    // http://7ujm.net/stl/sort.html
    sort(T.begin(),T.end(),greater<int>());
    
    // 特定の要素のindexを取得
    // https://www.cns.s.u-tokyo.ac.jp/~masuoka/post/search_vector_index/
    std::vector<int>::iterator itr;
    const int wanted = T[1]; // 2に対応するindex(この例では1)を取って来たい
    itr = std::find(dammy_T.begin(), dammy_T.end(), wanted);
    if (itr == dammy_T.end()) {
        std::cout << "search failed" << std::endl;
    }
    const int wanted_index = std::distance(dammy_T.begin(), itr);

    cout << S[wanted_index] << endl;
    
    return 0;
}