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

        ll m, a, b, c;
        cin >> m >> a >> b >> c;

        ll totalSeats = 2 * 1LL * m;

        ll canSeatinFirst = min(m, a);
        ll canSeatinSecond = min(m, b);
        ll remaining = totalSeats - (canSeatinFirst + canSeatinSecond);
        ll anySeat = min(remaining, c);
        ll ans = canSeatinFirst + canSeatinSecond + anySeat;
        cout << ans << '\n';
    }
    return 0;
}