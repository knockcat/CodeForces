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
const ll maxn = 1e5 + 10;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine -> Success :D

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        ll n, p, t;
        cin >> n >> p >> t;

        ll sum = (n * (n + 1)) / 2;

        ll x = p / sum;

        ll an = (x * 1LL * n);

        ll a = an - (x * 1LL * n) + x;

        ll mySn = (((2 * 1LL * a) + ((n - 1) * 1LL * x)) * n) / 2;

        if (p != mySn)
        {
            cout << -1 << endl;
            continue;
        }

        ll at = a + ((t - 1) * 1LL * x);

        cout << at << endl;
    }
    return 0;
}