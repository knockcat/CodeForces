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

template <typename T>
class DSU
{
public:
    int N;
    vector<T> rank, parent, size;
    DSU() {}
    DSU(int n)
    {
        N = n;
        rank.resize(n + 1, 0);
        size.resize(n + 1, 1);
        parent.resize(n + 1);

        for (T i = 0; i <= n; ++i)
        {
            parent[i] = i;
        }
    }

    template <typename X>
    X findParent(X u)
    {
        if (u == parent[u])
            return u;
        return parent[u] = findParent(parent[u]);
    }

    // Not be using unionByRank
    // but yes for future reference
    template <typename X>
    void unionByRank(X u, X v)
    {
        int nodeX = findParent(u);
        int nodeY = findParent(v);

        if (nodeX == nodeY)
            return;

        if (rank[nodeX] < rank[nodeY])
        {
            parent[nodeX] = nodeY;
        }
        else if (rank[nodeY] < rank[nodeX])
        {
            parent[nodeY] = nodeX;
        }
        else
        {
            parent[nodeY] = nodeX;
            ++rank[nodeX];
        }
    }

    void unionBySize(int u, int v)
    {
        int nodeX = findParent(u);
        int nodeY = findParent(v);

        if (nodeX == nodeY)
            return;

        if (size[nodeX] < size[nodeY])
        {
            parent[nodeX] = nodeY;
            size[nodeY] += size[nodeX];
        }
        else
        {
            parent[nodeY] = nodeX;
            size[nodeX] += size[nodeY];
        }
    }

    template <typename X>
    bool isSame(X u, X v)
    {
        return findParent(u) == findParent(v);
    }
};
// DSU<int> dsu(n);

// dsu.unionByRank(u, v);
// dsu.unionBySize(u,v);
// dsu.isSame(u, v) bool

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n, m;
    cin >> n >> m;

    vector<vector<char>> mat(n, vector<char>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cin >> mat[i][j];
    }

    vector<vector<char>> ans = mat;

    vector<int> dx = {0, +1, 0, -1};
    vector<int> dy = {-1, 0, +1, 0};

    auto isValid = [&](int x, int y)
    {
        return (x >= 0 and y >= 0 and x < n and y < m and mat[x][y] == '.');
    };

    DSU<int> dsu((n * m) + 1);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (mat[i][j] == '*')
                continue;

            for (int k = 0; k < 4; ++k)
            {
                int newx = dx[k] + i;
                int newy = dy[k] + j;

                if (isValid(newx, newy))
                {
                    int node = (i * m) + j;
                    int adjNode = (newx * m) + newy;

                    dsu.unionBySize(node, adjNode);
                }
            }
        }
    }

    unordered_set<int> visited;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (mat[i][j] == '*')
            {
                for (int k = 0; k < 4; ++k)
                {
                    int newx = dx[k] + i;
                    int newy = dy[k] + j;

                    if (isValid(newx, newy))
                    {
                        int adjNode = (newx * m) + newy;
                        visited.insert(dsu.findParent(adjNode));
                    }
                }

                int curr = 0;

                for (auto &ele : visited)
                {
                    curr += dsu.size[ele];
                }

                ++curr;
                curr %= 10;

                ans[i][j] = (curr + '0');

                visited.clear();
            }
        }
    }

    for (auto &row : ans)
    {
        for (auto &ele : row)
            cout << ele;
        cout << endl;
    }

    return 0;
}