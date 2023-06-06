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

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n, k, q;
        cin >> n >> k >> q;

        int cnt = 0;

        vector<int> v(n);

        for (auto &itr : v)
        {
            cin >> itr;
        }

        ll i = 0, j = 0;

        bool ok = false;

        ll ans = 0;

        while (j < n)
        {
            if (v[j] <= q)
            {
                ++j;

                ok = true;
            }
            else
            {
                ll win = j - i;

                ok = false;

                if (win >= k)
                {
                    ll curr = win - k + 1;

                    ll ways = (ll)curr * (curr + 1) / 2;

                    ans += ways;
                }
                i = ++j;
            }
        }

        if (ok)
        {
            ll win = j - i;

            ok = false;

            if (win >= k)
            {
                ll curr = win - k + 1;

                ans += curr * (curr + 1) / 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}