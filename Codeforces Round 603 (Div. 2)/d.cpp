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

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n;
    cin >> n;

    vector<string> vs(n);
    for (auto &itr : vs)
        cin >> itr;

    vector<int> freq(56);

    vector<int> adj[56];
    int end = 26;

    for (int i = 0; i < n; ++i)
    {
        if (!freq[vs[i][0] - 'a'])
        {
            adj[vs[i][0] - 'a'].push_back(end);
            adj[end++].push_back(vs[i][0] - 'a');

            freq[vs[i][0] - 'a'] = 1;
        }
        for (int j = 1; j < vs[i].size(); ++j)
        {
            adj[vs[i][j] - 'a'].push_back(vs[i][j - 1] - 'a');
            adj[vs[i][j - 1] - 'a'].push_back(vs[i][j] - 'a');
            freq[vs[i][j] - 'a'] = 1;
        }
    }

    // for (int i = 0; i < 26; ++i)
    // {
    //     if (adj[i].size())
    //     {
    //         for (auto &itr : adj[i])
    //             cout << itr << ' ';
    //         cout << endl;
    //     }
    // }

    set<int> used;
    int ans = 0;

    function<void(int)> dfs = [&](int sv)
    {
        used.insert(sv);
        for (auto &itr : adj[sv])
        {
            if (!used.count(itr))
                dfs(itr);
        }
    };

    for (int i = 0; i < end; ++i)
    {
        if (freq[i] and !used.count(i))
        {
            ++ans;
            dfs(i);
        }
    }

    // cout << "HI";

    cout << ans << endl;

    return 0;
}