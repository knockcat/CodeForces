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

void helper(int sv, vector<int> adj[], vector<bool> &visited, vector<int> &dfs)
{
    visited[sv] = 1;

    dfs.push_back(sv);

    for (auto itr : adj[sv])
    {
        if (!visited[itr])
        {
            helper(itr, adj, visited, dfs);
        }
    }
}

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

        vector<int> v(n + 2);

        for (int i = 1; i <= n; ++i)
        {
            cin >> v[i];
        }

        bool ok = false;

        if (v[1] == 1)
        {
            cout << n + 1 << ' ';

            for (int i = 1; i <= n; ++i)
                cout << i << ' ';
            cout << endl;

            ok = true;
        }
        else
        {
            for (int i = 1; i < n; ++i)
            {
                if (!v[i] and v[i + 1])
                {
                    for (int j = 1; j <= i; ++j)
                        cout << j << ' ';
                    cout << n + 1 << ' ';
                    for (int j = i + 1; j <= n; ++j)
                        cout << j << ' ';
                    cout << endl;

                    ok = true;
                    break;
                }
                if (ok)
                    break;
            }
        }

        if (!ok)
        {
            for (int i = 1; i <= n; ++i)
                cout << i << ' ';
            cout << n + 1 << ' ';

            cout << endl;
        }
    }
    return 0;
}