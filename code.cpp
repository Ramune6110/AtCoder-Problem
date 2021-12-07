// ABC208B
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

// 割れる回数
int sum = 0;

// 階乗
int kai(int a);
// ある整数の割れる回数を返す関数
int digcount(int num, int num_division);
// 割れる階乗値を算出
int kai_divition(int P);
// 上から順に割れる階乗の値を求める
int kai_count(int P);

int main()
{
    int P;
    cin >> P;

    bool flag = true;
    while (flag) {
        //cout << P << endl;
        P = kai_count(P);
        //cout << P << endl;
        if (P == 1) {
            flag = false;
            sum += 1;
            break;
        }
        if (P <= 0) {
            flag = false;
            break;
        }
        //cout << sum << endl;
    }

    cout << sum << endl;

    return 0;
}

// 階乗
int kai(int a)
{
    int ans = 1;
    for(int i = 2; i <= a; i++){
        ans*=i;
    }
    return ans;
}

// ある整数の割れる回数を返す関数
int digcount(int num, int num_division) 
{
    int count = 0;
    while (num) {
        num = num / num_division;
        count++;
    }

    return count;
}

// 割れる階乗値を算出
int kai_divition(int P)
{
    int num;
    if (P >= kai(10)) {
        num = 10;
    } else if (P >= kai(9)) {
        num = 9;
    } else if (P >= kai(8)) {
        num = 8;
    } else if (P >= kai(7)) {
        num = 7;
    } else if (P >= kai(6)) {
        num = 6;
    } else if (P >= kai(5)) {
        num = 5;
    } else if (P >= kai(4)) {
        num = 4;
    } else if (P >= kai(3)) {
        num = 3;
    } else if (P >= kai(2)) {
        num = 2;
    } else if (P >= kai(1)) {
        num = 1;
    }

    return num;
}

// 上から順に割れる階乗の値を求める
int kai_count(int P)
{
    int kai_num = kai_divition(P);
    switch(kai_num) {
        case 10:
            if (P >= kai(10)) {
                int count = digcount(P, kai(10));
                count = count - 1;
                P = P - count * kai(10);
                sum += count;
            }
            break;
        case 9:
            if (P >= kai(9)) {
                int count = digcount(P, kai(9));
                count = count - 1;
                P = P - count * kai(9);
                sum += count;
            }
            break;
        case 8:
            if (P >= kai(8)) {
                int count = digcount(P, kai(8));
                count = count - 1;
                P = P - count * kai(8);
                sum += count;
            }
            break;
        case 7:
            if (P >= kai(7)) {
                int count = digcount(P, kai(7));
                count = count - 1;
                P = P - count * kai(7);
                sum += count;
            }
            break;
        case 6:
            if (P >= kai(6)) {
                int count = digcount(P, kai(6));
                count = count - 1;
                P = P - count * kai(6);
                sum += count;
            }
            break;
        case 5:
            if (P >= kai(5)) {
                int count = digcount(P, kai(5));
                count = count - 1;
                P = P - count * kai(5);
                sum += count;
            }
            break;
        case 4:
            if (P >= kai(4)) {
                int count = digcount(P, kai(4));
                count = count - 1;
                P = P - count * kai(4);
                sum += count;
            }
            break;
        case 3:
            if (P >= kai(3)) {
                int count = digcount(P, kai(3));
                count = count - 1;
                P = P - count * kai(3);
                sum += count;
            }
            break;
        case 2:
            if (P >= kai(2)) {
                int count = digcount(P, kai(2));
                count = count - 1;
                P = P - count * kai(2);
                sum += count;
            }
            break;
        case 1:
            if (P >= kai(1)) {
                int count = digcount(P, kai(1));
                count = count;
                P = P - count * kai(1);
                sum += count;
            }
            break;
        default:
            break;
    }

    return P;
}
