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

