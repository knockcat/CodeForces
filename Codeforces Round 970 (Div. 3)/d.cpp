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

template <typename T>
class DSU
{
public:
    int N;
    vector<T> rank, parent, size, color;
    DSU() {}
    DSU(int n, string &str)
    {
        N = n;
        rank.resize(n + 1, 0);
        size.resize(n + 1, 1);
        parent.resize(n + 1);
        color.resize(n + 1, 0);

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

    void unionBySize(int u, int v, char ch)
    {
        int nodeX = findParent(u);
        int nodeY = findParent(v);

        if (nodeX == nodeY)
        {
            color[nodeX] += (ch == '0' ? 1 : 0);
            return;
        }

        if (size[nodeX] < size[nodeY])
        {
            parent[nodeX] = nodeY;
            size[nodeY] += size[nodeX];
            color[nodeY] += color[nodeX];
            color[nodeY] += (ch == '0' ? 1 : 0);
        }
        else
        {
            parent[nodeY] = nodeX;
            size[nodeX] += size[nodeY];
            color[nodeX] += color[nodeY];
            color[nodeX] += (ch == '0' ? 1 : 0);
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
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;

        vector<int> v(n);
        for (auto &ele : v)
            cin >> ele;

        string str;
        cin >> str;

        DSU<int> dsu(n + 5, str);

        for (int i = 0; i < n; ++i)
        {
            dsu.unionBySize(i + 1, v[i], str[i]);
        }

        for (int i = 0; i < n; ++i)
        {
            int cur = dsu.color[dsu.findParent(v[i])];
            cout << cur << ' ';
        }
        cout << endl;
    }
    return 0;
}