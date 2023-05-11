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
        int cnt[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cnt[i] = 0;
        }
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            cnt[u]++;
            cnt[v]++;
        }
        map<int, int> cnts;
        for (int i = 1; i <= n; i++)
        {
            cnts[cnt[i]]++;
        }
        vector<int> v;
        for (auto p : cnts)
        {
            v.push_back(p.second);
        }
        sort(v.begin(), v.end());
        if (v.size() == 3)
        {
            cout << v[1] << ' ' << v[2] / v[1] << '\n';
        }
        else
        {
            cout << v[0] - 1 << ' ' << v[1] / (v[0] - 1) << '\n';
        }
    }
    return 0;
}