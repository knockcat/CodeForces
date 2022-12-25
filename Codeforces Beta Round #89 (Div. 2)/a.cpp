// KNOCKCAT

#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long int
#define endl "\n"

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod = 1e9 + 7;
const ll eps = 1e-9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

bool isLowercaseVowel(char c)
{
    // returns true if char matches any of below
    return (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i');
}

bool isUppercaseVowel(char c)
{
    // returns true if char matches any of below
    return (c == 'A' || c == 'O' || c == 'Y' || c == 'E' || c == 'U' || c == 'I');
}

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    string str;
    cin >> str;

    string res = "";
    int n = str.size();

    for (int i = 0; i < n; ++i)
    {
        if (isUppercaseVowel(str[i]) or isLowercaseVowel(str[i]))
        {
            continue;
        }
        else
        {
            res += '.';
            res += tolower(str[i]);
        }
    }

    cout << res << endl;
    return 0;
}
