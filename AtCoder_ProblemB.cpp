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
