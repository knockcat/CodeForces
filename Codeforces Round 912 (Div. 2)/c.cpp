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

        int n;
        cin >> n;

        vector<int> v(n);

        ll totSum = 0;

        for (auto &itr : v)
        {
            cin >> itr;
            totSum += itr;
        }

        int inc = 1;

        ll ans = v[0];
        totSum -= v[0];

        for (int i = 1; i < n; ++i)
        {
            if (totSum > 0)
            {
                ++inc;
            }
            ans = (ans + (inc * v[i]));
            totSum -= v[i];
        }

        cout << ans << endl;
    }
    return 0;
}