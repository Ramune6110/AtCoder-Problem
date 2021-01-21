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
