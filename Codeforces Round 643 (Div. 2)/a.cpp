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

ll add(ll x)
{
    ll mini = 10, maxi = 0;
    while (x > 0)
    {
        ll y = x % 10;
        x /= 10;
        mini = min(mini, y);
        maxi = max(maxi, y);
    }

    return mini * maxi;
}

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        ll x, k;
        cin >> x >> k;
        --k;
        while (k--)
        {
            ll have = add(x);
            if (have == 0)
                break;
            x += have;
        }

        cout << x << endl;
    }
    return 0;
}