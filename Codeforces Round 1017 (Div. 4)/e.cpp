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

/*
Things have not went as I wanted and yes I am feeling maybe this is not meant for me (because of results) but still I will do this as,
I cannot given up.
Reaching here and still trying is also a milestone for me.
My journey has been incredible and I will surely improve.
It's just a matter of time and I am sure I am going to make it.

Till now show some resistance, focus on small goals and the big goals will take care of themselves.
knockcat this side...
*/

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        vector<int> bits(32, 0);
        int n;
        cin >> n;

        vector<ll> v(n);
        for (auto &ele : v)
            cin >> ele;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 32; ++j)
            {
                if (v[i] & (1 << j))
                    ++bits[j];
            }
        }

        ll res = 0;
        for (int i = 0; i < n; ++i)
        {
            ll ans = 0;
            for (int j = 0; j < 32; ++j)
            {
                if (v[i] & (1 << j))
                {
                    int notSet = n - bits[j];
                    ll val = 1 << j;
                    ll got = val * 1LL * notSet;
                    ans += got;
                }
                else
                {
                    ll set = bits[j];
                    ll val = 1 << j;
                    ll got = val * 1LL * set;
                    ans += got;
                }
            }

            res = max(res, ans);
        }

        cout << res << endl;
    }

    return 0;
}