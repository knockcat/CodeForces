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

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int m, s;
    cin >> m >> s;

    if (s == 0)
    {
        if (m == 1)
        {
            cout << 0 << " " << 0 << endl;
            return 0;
        }
        else
        {
            cout << "-1 -1" << endl;
            return 0;
        }
    }

    string maxi, mini;

    int k = 9;
    for (int i = 0; i < m; ++i)
    {
        int x = min(k, s);
        maxi += x + '0';
        s -= x;
    }

    if (s > 0)
    {
        cout << "-1 -1" << endl;
        return 0;
    }

    for (int i = m - 1; i >= 0; --i)
    {
        mini += maxi[i];
    }

    int j = 0;
    while (mini[j] == '0')
    {
        ++j;
    }
    ++mini[0];
    --mini[j];

    cout << mini << " " << maxi << endl;

    return 0;
}