// JAI SHREE RAM
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
const ll eps = -1e9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        string str;
        cin >> str;

        int f = str[1] - '0';
        char s = 'a';

        for (int i = 1; i <= 8; ++i)
        {
            if (str[0] != s)
                cout << s << str[1] << endl;
            ++s;
        }

        for (int i = 1; i <= 8; ++i)
        {
            if (i != f)
                cout << str[0] << i << endl;
        }
    }
    return 0;
}
