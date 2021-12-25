// ABC213B
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
    vector<int> dammy_A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        dammy_A[i] = A[i];
    }

    //降順ソート
    // http://7ujm.net/stl/sort.html
    sort(A.begin(),A.end(),std::greater<int>());
    
    // 特定の要素のindexを取得
    // https://www.cns.s.u-tokyo.ac.jp/~masuoka/post/search_vector_index/
    std::vector<int>::iterator itr;

    // A[1]に対応するindexを取って来たい
    const int wanted = A[1]; 
    itr = std::find(dammy_A.begin(), dammy_A.end(), wanted);
    if (itr == dammy_A.end()) {
        std::cout << "search failed" << std::endl;
    }
    
    const int wanted_index = distance(dammy_A.begin(), itr);

    cout << wanted_index + 1 << endl;
    
    return 0;
}
