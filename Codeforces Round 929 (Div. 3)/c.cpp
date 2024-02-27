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

long long expo(ll x, ll y)
{
    ll res = 1;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % mod;
        y >>= 1;
        x = (x * x) % mod;
    }
    return res;
}

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int a, b, l;
        cin >> a >> b >> l;

        ll ans = 0;

        vector<ll> aPower, bPower;

        for (int i = 0; i <= 20; ++i)
        {
            ll powerA = expo(a, i);
            if (powerA > l)
            {
                break;
            }
            aPower.push_back(powerA);
        }
        for (int i = 0; i <= 20; ++i)
        {
            ll powerB = expo(b, i);
            if (powerB > l)
            {
                break;
            }
            bPower.push_back(powerB);
        }

        set<int> st;
        for (int i = 0; i < aPower.size(); ++i)
        {
            for (int j = 0; j < bPower.size(); ++j)
            {
                ll have = aPower[i] * bPower[j];
                if (have > l)
                    break;

                ll k = l / have;

                if (k == 0)
                    continue;

                ll mult = k * have;

                if (mult == l)
                {
                    st.insert(k);
                }
            }
        }

        cout << (int)st.size() << endl;
    }
    return 0;
}