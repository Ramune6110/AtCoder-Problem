// ABC081A
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
    int a, b;
    cin >> a >> b;

    double ans;
    // 四捨五入 : https://daeudaeu.com/kurisuke_kiriage_shisyagonyu/#i-5
    ans = round(((double)a + (double)b) / 2);

    cout << ans << endl;

    return 0;
}