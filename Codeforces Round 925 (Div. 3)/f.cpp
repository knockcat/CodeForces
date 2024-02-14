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

        int n, m;
        cin >> n >> m;

        vector<vector<int>> v(m, vector<int>(n));

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> v[i][j];
            }
        }

        vector<int> adj[n + 1];

        for (int i = 0; i < m; ++i)
        {
            for (int j = 2; j < n; ++j)
                adj[v[i][j - 1]].push_back(v[i][j]);
        }

        vector<bool> visited(n + 1, false), pathVisited(n + 1, false);

        function<bool(int)> dfs = [&](int sv)
        {
            visited[sv] = pathVisited[sv] = true;

            for (auto &node : adj[sv])
            {
                if (!visited[node])
                {
                    if (dfs(node))
                        return true;
                }
                else if (pathVisited[node])
                    return true;
            }

            pathVisited[sv] = false;
            return false;
        };

        bool cycle = false;

        for (int i = 1; i < n; ++i)
        {
            if (!visited[i] and dfs(i))
                cycle = true;
        }

        cout << (cycle ? "NO" : "YES") << endl;
    }
    return 0;
}