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

        int n;
        cin >> n;

        vector<int> v(n);

        for (auto &itr : v)
            cin >> itr;

        bool ok = false;

        map<ll, int> mp;

        ++mp[0];

        int sum = 0;

        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
                sum += v[i];
            else
                sum -= v[i];

            if (mp[sum] > 0)
            {
                ok = true;
                break;
            }

            ++mp[sum];
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}