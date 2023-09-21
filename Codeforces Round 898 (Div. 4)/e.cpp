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

        int n, water;
        cin >> n >> water;

        vector<int> v(n);

        for (auto &itr : v)
            cin >> itr;

        ll low = 1, high = 3e9;

        ll ans = high;

        auto check = [&](int val)
        {
            long long have = 0;
            for (int i = 0; i < n; ++i)
            {
                if (val > v[i])
                    have += (val - v[i]);
            }
            return have >= water;
        };

        auto check2 = [&](int val)
        {
            long long have = 0;
            for (int i = 0; i < n; ++i)
            {
                if (val > v[i])
                    have += (val - v[i]);
            }
            return have;
        };

        while (low <= high)
        {
            ll mid = (low + high) >> 1;

            if (check(mid))
            {
                ans = min(ans, mid);
                high = mid - 1;
            }
            else
                low = mid + 1;
        }

        // cout << check2(ans) << endl;
        if (check2(ans) > water)
        {
            // cout << "yes" << endl;
            --ans;
        }
        cout << ans << endl;
    }
    return 0;
}