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

// If you will be good at programming she will be yours

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n, k, x;

        cin >> n >> k >> x;

        vector<int> v(n);

        for (auto &ele : v)
            cin >> ele;

        sort(v.rbegin(), v.rend());

        vector<int> pref(n + 1, 0);

        pref[0] = v[0];

        for (int i = 1; i < n; ++i)
            pref[i] = (pref[i - 1] + v[i]);

        ll sum = pref[n - 1];

        ll ans = INT_MIN;

        for (int i = 0; i <= k; ++i)
        {
            ll have = pref[n - 1] - (i > 0 ? pref[i - 1] : 0);
            ll minus = (i + x - 1 < n ? pref[i + x - 1] - (i > 0 ? pref[i - 1] : 0) : pref[n - 1] - (i > 0 ? pref[i - 1] : 0));
            ll rem = (i + x - 1 < n ? pref[n - 1] - pref[i + x - 1] : 0);

            // cout << have << ' ' << minus << ' ' << rem << endl;

            ans = max(ans, rem - minus);
        }
        // cout << endl;

        cout << ans << endl;
    }
    return 0;
}