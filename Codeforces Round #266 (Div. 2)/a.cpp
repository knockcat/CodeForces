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

    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    ll ans = n * a, ans1 = n * a;
    if (n % m == 0)
        ans = (ll)(n / m) * b;
    else
    {
        ans1 = (ll)((n / m) + 1) * b;
        ans = (ll)((ll)(n / m) * b + (ll)(n % m) * a);
    }

    cout << min({ans1, ans, n * a}) << endl;
    return 0;
}