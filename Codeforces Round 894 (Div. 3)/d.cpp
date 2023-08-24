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

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        ll n;
        cin >> n;

        ll need = sqrt(2 * n);

        while (need * (need - 1) / 2 <= n)
            ++need;

        ll prev = need - 1;

        ll needTot = need * (need - 1) / 2;

        ll tot = prev * (prev - 1) / 2;

        ll rem = n - tot;

        // cout << rem << endl;

        cout << prev + rem << endl;
    }
    return 0;
}