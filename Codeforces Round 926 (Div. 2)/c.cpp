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

// If I'll be good at programming she will be mine

ll minimumCostNeedToOvercomeLoss(ll currLost, ll have, ll k, ll n)
{
    ll low = 1, high = have;
    ll minBate = have;

    bool ok = false;

    while (low <= high)
    {
        ll mid = (low + high) / 2;

        if ((mid * k) + (have - mid) > n)
        {
            ok = true;
            minBate = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return (ok ? minBate : 1e12);
}

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        ll k, x, a;
        cin >> k >> x >> a;

        ll currBate = 1, have = a, currLoss = 0, n = a;

        bool ok = true;
        for (int i = 1; i <= x; ++i)
        {
            if (have - currBate <= 0)
            {
                ok = false;
                break;
            }
            have -= currBate;
            currLoss += currBate;
            ll mnRisk = minimumCostNeedToOvercomeLoss(currLoss, have, k, n);
            // cout << mnRisk << endl;
            currBate = mnRisk;
        }

        if (ok and (have * k) > n)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}