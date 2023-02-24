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

    ll a, b, c;
    cin >> a >> b >> c;

    ll ans = (ll)(a * b * c);
    ll ans2 = (ll)((a * b) + c);
    ll ans3 = (ll)((a + b) * c);
    ll ans4 = (ll)((b * c) + a);
    ll ans5 = (ll)((b + c) * a);
    ll ans6 = (ll)(a + b + c);

    cout << max({ans, ans2, ans3, ans4, ans5, ans6}) << endl;

    return 0;
}