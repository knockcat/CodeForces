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
        int n, m, d;
        cin >> n >> m >> d;

        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            mp.insert({v[i], i + 1}); // pos
        }

        vector<int> b(m);
        for (int i = 0; i < m; ++i)
            cin >> b[i];
        bool ok = true;
        int ans = INT_MAX;
        for (int i = 0; i < m - 1; ++i)
        {
            if (mp[b[i]] > mp[b[i + 1]] or mp[b[i + 1]] > mp[b[i]] + d)
            {
                ok = false;
                break;
            }
            else
            {
                int one = mp[b[i + 1]] - mp[b[i]];
                ans = min(ans, one);
                int two = d + 1 - (mp[b[i + 1]] - mp[b[i]]);
                int moves = mp[b[i]] - 1 + n - mp[b[i + 1]];
                if (two <= moves)
                    ans = min(ans, two);
            }
        }

        if (ok)
            cout << ans << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}