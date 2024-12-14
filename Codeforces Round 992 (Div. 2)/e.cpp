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

    const int m = 998244353;

    while (tt--)
    {
        // knockcat

        int n, q;
        cin >> n >> q;
        vector<int> adj[n + 1];

        for (int i = 0; i < n - 1; ++i)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> parent(n + 1, -1);

        function<void(int, int)> dfs = [&](int node, int par)
        {
            parent[node] = par;
            for (auto &chlNode : adj[node])
            {
                if (chlNode != par)
                    dfs(chlNode, node);
            }
        };

        dfs(1, -1);
        vector<vector<int>> dp;

        function<int(int, int)> helper = [&](int node, int coins) -> int
        {
            if (coins < 0)
                return INT_MAX;
            if (node == -1)
                return -1;
            if (node == 1)
                return 0;

            if (dp[node][coins] != -1)
                return dp[node][coins];

            int c = adj[node].size();
            int y = parent[parent[node]];

            int coinTake = helper(y, coins - 1) + 2;
            int randomCase = helper(y, coins) + 2 * c;
            int ans = min(coinTake, randomCase);

            return dp[node][coins] = (ans + m) % m;
        };

        while (q--)
        {
            int node, coins;
            cin >> node >> coins;
            dp.resize(n + 1, vector<int>(n + 1, -1));
            cout << 1 + helper(parent[node], coins) << '\n';
        }
    }
    return 0;
}