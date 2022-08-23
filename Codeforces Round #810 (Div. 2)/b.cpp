#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long

const int N = 1e5 + 5;
const int mod = 1e9 + 7;
vector<int> adj[N];
vector<int> v(N);
int32_t main()
{

    fast;
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            adj[i].clear();
        }

        vector<pair<int, int>>vp;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            vp.push_back(make_pair(x, y));
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        if (m % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int cost = 1e15;
            for (int i = 1; i <= n; i++)
                if (adj[i].size() % 2)
                    cost = min(cost, v[i]);

            for (auto itr : vp)
            {
                int x = itr.first;
                int y = itr.second;
                if (adj[x].size() % 2 == 0 && adj[y].size() % 2 == 0)
                    cost = min(cost, v[x] + v[y]);
            }
            cout << cost << endl;
        }
    }
    return 0;
}