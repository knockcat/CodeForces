#include <bits/stdc++.h>
using namespace std;

bool dfsCheck(int sv, vector<int> adj[], vector<int> &color)
{
    if (color[sv] == -1)
        color[sv] = 1;

    for (auto itr : adj[sv])
    {
        if (color[itr] == -1)
        {
            color[itr] = 1 - color[sv];

            if (!dfsCheck(itr, adj, color))
                return false;
        }
        else if (color[itr] == color[sv])
            return false;
    }
    return true;
}

bool CheckBipartite(vector<int> adj[], int n)
{
    vector<int> color(n, -1);

    for (int i = 0; i < n; ++i)
    {
        if (color[i] == -1)
        {
            if (!dfsCheck(i, adj, color))
                return false;
        }
    }
    return true;
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> adj[n + 1];
        bool flag = true;

        for (int i = 0; i < n; ++i)
        {
            int u, v;
            cin >> u >> v;
            if (u == v)
                flag = false;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for (int i = 1; i <= n; ++i)
        {
            if (adj[i].size() != 2)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            if (CheckBipartite(adj, n))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}