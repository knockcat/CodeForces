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

void dfs(int sv, int par, int curr, int maxcurr, int k, int &ans, vector<int> &v, vector<int> adj[])
{
    if (v[sv] == 1)
        ++curr;
    else
        curr = 0;

    maxcurr = max(maxcurr, curr);

    int child = 0;

    for (auto itr : adj[sv])
    {
        if (itr != par)
        {
            dfs(itr, sv, curr, maxcurr, k, ans, v, adj);
            ++child;
        }
    }

    if (child == 0 and maxcurr <= k)
        ++ans;
}

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n, k;
    cin >> n >> k;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; ++i)
        cin >> v[i];

    vector<int> adj[n + 1];

    for (int i = 1; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int ans = 0;

    dfs(1, -1, 0, 0, k, ans, v, adj);

    cout << ans << endl;

    return 0;
}