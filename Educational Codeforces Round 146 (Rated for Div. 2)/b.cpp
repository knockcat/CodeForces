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

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        ll x, y;
        cin >> x >> y;

        int ans = INT_MAX;
        int maxi = 1e5;

        for (int i = 1; i <= maxi; ++i)
        {
            int xx = (x + i - 1) / i;
            int yy = (y + i - 1) / i;

            ans = min(ans, i + xx + yy - 1);
        }

        cout << ans << endl;
    }
    return 0;
}