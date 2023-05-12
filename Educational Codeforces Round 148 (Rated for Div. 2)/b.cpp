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

        int n, k;
        cin >> n >> k;

        vector<ll> v(n);

        for (auto &itr : v)
            cin >> itr;

        int kk = k;

        sort(v.begin(), v.end());

        // int i = 0, j = n - 1;

        // while (k-- and i < j)
        // {
        //     ll sum = (ll)v[i] + v[i + 1];
        //     if (i + 1 <= j and sum < v[j])
        //     {
        //         i += 2;
        //     }
        //     else if (i + 1 <= j and sum == v[j])
        //         i += 2;
        //     else
        //         --j;
        // }

        ll sum = 0, sum2 = 0, sum3 = 0;

        // for (int l = i; l <= j; ++l)
        // {
        //     sum += v[l];
        // }

        for (int ii = 0; ii < n; ++ii)
            sum += v[ii];

        // for (int ii = (ll)(2 * kk); ii < n; ++ii)
        //     sum3 += v[ii];

        // cout << max({sum2, sum3, sum})
        //  << endl;

        vector<int> pref(n + 1, 0), suff(n + 1, 0);

        pref[0] = 0;
        suff[0] = 0;

        for (int i = 1; i <= n; ++i)
            pref[i] = pref[i - 1] + v[i - 1];

        reverse(v.begin(), v.end());

        for (int j = 1; j <= n; ++j)
            suff[j] = suff[j - 1] + v[j - 1];

        for (int i = 0; i <= k; ++i)
        {
            int l = pref[2 * i], r = suff[k - i];

            sum3 = max(sum3, sum - (l + r));
        }

        cout << sum3 << endl;
    }
    return 0;
}