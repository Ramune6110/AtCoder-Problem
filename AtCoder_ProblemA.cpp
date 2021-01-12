// ABC042A
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int A[3];

    for (int i = 0; i < 3; i++) {
        cin >> A[i];
    }

    sort(A, A + 3);

    if ((A[0] == 5) && (A[1] == 5) && (A[2] == 7)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

// ABC043A
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int N;
    int ans = 0;

    cin >> N;

    for (int i = 1; i <= N; i++) {
        ans += i;
    }

    cout << ans << endl;

    return 0;
}

// ABC044A
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int N, K, X, Y;
    int sum = 0;

    cin >> N >> K >> X >> Y;

    for (int i = 1; i <= N; i++) {
        if (i <= K) {
            sum += X;
        } else if (i >= K + 1) {
            sum += Y;
        }
    }

    cout << sum  << endl;

    return 0;
}

// ABC045A
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int a, b, h;

    cin >> a >> b >> h;

    cout << (a + b) * h / 2 << endl;

    return 0;
}

// ABC046A
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int ans[3], count;

    for (int i = 0; i < 3; i++) {
        cin >> ans[i];
    }

    if ((ans[0] == ans[1]) && (ans[1] == ans[2]) && (ans[0] == ans[2])) 
    {
        count = 1;
    } 
    else if ((ans[0] == ans[1]) || (ans[1] == ans[2]) || (ans[0] == ans[2]))
    {
        count = 2;
    }
    else 
    {
        count = 3;
    }

    cout << count;

    return 0;
}

// ABC047A
#include <iostream>
#include <cstring>
#include <string>
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
    int candy[3];

    for (int i = 0; i < SIZE_OF_ARRAY(candy); i++) {
        cin >> candy[i];
    }

    sort(candy, candy + SIZE_OF_ARRAY(candy));

    if ((candy[0] + candy[1]) == candy[2])
    {
        cout << "Yes " << endl;
    } else 
    {
        cout << "No" << endl;
    }

    return 0;
}

// ABC048A
#include <iostream>
#include <cstring>
#include <string>
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
    string a, s, c;

    cin >> a >> s >> c;

    cout << "A" << s[0] << "C" << endl;

    return 0;
}

// ABC049A
#include <iostream>
#include <cstring>
#include <string>
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
    char c;

    cin >> c;

    switch (c) {
        case 'a':
            cout << "vowel" << endl;
            break;
        case 'e':
            cout << "vowel" << endl;
            break;
        case 'i':
            cout << "vowel" << endl;
            break;
        case 'o':
            cout << "vowel" << endl;
            break;
        case 'u':
            cout << "vowel" << endl;
            break;
        default :
            cout << "consonant" << endl;
    }

    return 0;
}

// ABC050A
#include <iostream>
#include <cstring>
#include <string>
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
    long int a, b, ans;
    char ob;

    cin >> a >> ob >> b;

    if (ob == '+') 
    {
        ans = a + b;
    }
    else if (ob == '-')
    {
        ans = a - b;
    }

    cout << ans << endl;

    return 0;
}

// ABC051A
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
    string s;

    cin >> s;

    cout << regex_replace(s, regex(","), " ") << endl;

    return 0;
}

// ABC052A
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
    int A, B, C, D;
    int s1, s2;

    cin >> A >> B >> C >> D;

    s1 = A * B;
    s2 = C * D;

    if (s1 > s2) 
    {
        cout << s1 << endl;
    }
    else if (s2 > s1)
    {
        cout << s2 << endl;
    }
    else if (s1 == s2)
    {
        cout << s1 << endl;
    }

    return 0;
}

// ABC053A
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
    int x;

    cin >> x;

    if (x < 1200) {
        cout << "ABC" << endl;
    } else {
        cout << "ARC" << endl;
    }

    return 0;
}

// ABC054A
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
    int A, B;
    string winner;

    cin >> A >> B;

    if ((A > B) && (B != 1)) {
        winner = "Alice";
    } else if ((B > A) && (A != 1)) {
        winner = "Bob";
    } else if ((B > A) && (A == 1)) {
        winner = "Alice";
    } else if ((A > B) && (B == 1)) {
        winner = "Bob";
    } else if (A == B) {
        winner = "Draw";
    }

    cout << winner << endl;

    return 0;
}

// ABC055A
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
    int N, x, y;

    cin >> N;

    x = 800 * N;
    y = 200 * (N / 15);

    cout << x - y << endl;

    return 0;
}

// ABC056A
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
    char a, b;

    cin >> a >> b;

    if (a == 'H' && b == 'H') {
        cout << 'H' << endl;
    } else if (a == 'H' && b == 'D') {
        cout << 'D' << endl;
    } else if (a == 'D' && b == 'H') {
        cout << 'D' << endl;
    } else if (a == 'D' && b == 'D') {
        cout << 'H' << endl;
    }

    return 0;
}

// ABC057A
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
    int A, B;

    cin >> A >> B;

    int ans = A + B;

    if (ans <= 23) {
        cout << ans << endl;
    } else if (ans >= 24) {
        ans = ans - 24;
        cout << ans << endl;
    }

    return 0;
}

// ABC058A
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
    int a, b, c;

    cin >> a >> b >> c;

    if ((b - a) == (c - b)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

// ABC059A
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
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    // 英子文字を大文字に変換する関数
    transform(s1.begin(),s1.end(),s1.begin(),:: toupper);
    transform(s2.begin(),s2.end(),s2.begin(),:: toupper);
    transform(s3.begin(),s3.end(),s3.begin(),:: toupper);

    cout << s1[0] << s2[0] << s3[0] << endl;

    return 0;
}