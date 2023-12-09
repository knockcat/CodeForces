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

        ll n;
        cin >> n;

        vector<ll> v(n);

        for (auto &itr : v)
            cin >> itr;

        ll x, a, y, b, k;

        cin >> x >> a >> y >> b >> k;

        vector<ll> pref(n, 0);

        sort(v.rbegin(), v.rend());

        pref[0] = v[0] / 100;

        for (int i = 1; i < n; ++i)
            pref[i] = pref[i - 1] + v[i] / 100;

        if (y > x)
            swap(x, y), swap(a, b);

        ll curr = 0;

        ll f = 0, s = 0, both = 0;

        int ans = -1;

        for (int i = 0; i < n; ++i)
        {
            int c = i + 1;
            if (c % a == 0)
                ++f;
            if (c % b == 0)
                ++s;
            if (c % a == 0 and c % b == 0)
                --s, --f, ++both;

            // (x + y) % on both entries
            ll bSum = (both >= 1 ? pref[both - 1] : 0);

            // x % on f entries
            ll fSum = (f >= 1 ? pref[both + f - 1] - (both >= 1 ? pref[both - 1] : 0) : 0);

            // y% on s entries
            ll sSum = (s >= 1 ? pref[both + f + s - 1] - (both + f >= 1 ? pref[both + f - 1] : 0) : 0);

            ll fquantity = 0, bquantity = 0, squantity = 0;
            bquantity = bSum * 1LL * (x + y);
            fquantity = fSum * 1LL * (x);
            squantity = sSum * 1LL * (y);

            // cout << bquantity << ' ' << fquantity << ' ' << squantity << endl;

            curr = (bquantity + fquantity + squantity);

            if (curr >= k)
            {
                ans = c;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}