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

// If I'll be good at programming she will be mine

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

        vector<int> adj[n + 1];

        for (int i = 0; i < n; ++i)
        {
            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> cycleNodes;
        vector<int> parent(n + 1, -1);
        vector<bool> visited(n + 1, false), isCycleNode(n + 1, false);
        vector<int> subtree(n + 1, 0);
        bool found = false;

        function<void(int, int, vector<bool> &)> dfs = [&](int sv, int par, vector<bool> &visited)
        {
            visited[sv] = 1;
            parent[sv] = par;

            for (auto &node : adj[sv])
            {
                if (found)
                    return;
                if (!visited[node])
                    dfs(node, sv, visited);
                else if (node != par)
                {
                    while (node != sv)
                    {
                        found = true;
                        cycleNodes.push_back(sv);
                        isCycleNode[sv] = 1;
                        sv = parent[sv];
                    }
                    cycleNodes.push_back(node);
                    isCycleNode[node] = 1;
                }
            }
        };

        function<int(int, int)> dfsSubtree = [&](int sv, int par)
        {
            subtree[sv] = 1;

            for (auto &node : adj[sv])
            {
                if (!isCycleNode[node] and node != par)
                {
                    subtree[sv] += dfsSubtree(node, sv);
                }
            }

            return subtree[sv];
        };

        dfs(1, -1, visited);

        ll ans = (n * 1LL * (n - 1));

        for (auto &node : cycleNodes)
        {
            ll subTreeSize = dfsSubtree(node, -1);

            ans -= (subTreeSize * (subTreeSize - 1)) / 2;
        }

        cout << ans << endl;
    }
    return 0;
}