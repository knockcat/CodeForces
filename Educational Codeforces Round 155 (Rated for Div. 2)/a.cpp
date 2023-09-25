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

        int n;
        cin >> n;

        vector<pair<int, int>> vp;

        int high = 0;

        for (int i = 0; i < n; ++i)
        {
            int x, y;
            cin >> x >> y;

            vp.push_back({x, y});
        }

        int aS = vp[0].first, aE = vp[0].second;

        int maxStrength = 0;

        for (int i = 1; i < n; ++i)
        {
            if (vp[i].second >= aE)
            {
                maxStrength = max(maxStrength, vp[i].first);
            }
        }

        if (maxStrength + 1 <= aS)
            cout << maxStrength + 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}