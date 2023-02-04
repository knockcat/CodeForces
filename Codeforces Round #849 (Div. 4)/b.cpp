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

int32_t main()
{
    fast;
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        int x = 0, y = 0;

        int x1 = 1, x2 = 1;
        bool ok = false;

        for (int i = 0; i < n; ++i)
        {
            if (str[i] == 'U')
                ++y;
            else if (str[i] == 'R')
                ++x;
            else if (str[i] == 'D')
                --y;
            else
                --x;

            if (x == 1 and y == 1)
                ok = true;
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}