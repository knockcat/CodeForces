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

ll expo(ll x, ll y, ll mod)
{
    ll res = 1;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % mod;
        x = (x * x) % mod;
        y >>= 1;
    }

    return res;
}

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        ll n, k;
        cin >> n >> k;

        vector<ll> v(n);
        for (auto &ele : v)
            cin >> ele;

        ll maxi = 0, sum = 0;
        ll arrSum = 0;
        for (auto &ele : v)
        {
            arrSum += ele;
            sum += ele;
            maxi = max(maxi, sum);
            if (sum < 0)
                sum = 0;
        }

        arrSum += mod;
        arrSum %= mod;

        while (k--)
        {
            arrSum += maxi;
            maxi *= 2;
            maxi %= mod;
            arrSum += mod;
            arrSum %= mod;
        }

        cout << arrSum << endl;
    }
    return 0;
}