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

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        int n;
        cin >> n;

        vector<int> adj[n + 1];
        vector<ll> degree(n + 1, 0);
        int u, v;
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            ++degree[u];
            ++degree[v];
        }

        for (int i = 1; i <= n; ++i)
            degree[i] -= 2;

        ll res = LONG_MIN;

        function<ll(ll, ll)> dfs = [&](ll node, ll par) -> ll
        {
            ll mx = 0, mx2 = 0;
            for (auto &chlNode : adj[node])
            {
                if (chlNode == par)
                    continue;
                ll ans = dfs(chlNode, node);
                if (ans > mx)
                {
                    mx2 = mx;
                    mx = ans;
                }
                else if (ans > mx2)
                    mx2 = ans;
            }

            res = max(res, mx + mx2 + degree[node]);

            return max(mx, mx2) + degree[node];
        };

        dfs(1, -1);

        cout << res + 2 << '\n';
    }
    return 0;
}