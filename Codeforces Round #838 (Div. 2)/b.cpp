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

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        vector<pair<int, int>> vp, ans;
        for (int i = 0; i < n; ++i)
        {
            vp.push_back({v[i], i + 1});
        }

        sort(vp.begin(), vp.end());

        for (int i = 1; i < n; i++)
        {
            if ((vp[i].first % vp[i - 1].first) != 0)
            {
                int x = (vp[i].first / vp[i - 1].first + 1) * vp[i - 1].first - vp[i].first;
                ans.push_back({vp[i].second, x});
                vp[i].first += x;
            }
        }

        if (ans.size() == 0)
            cout << 0 << endl;
        else
        {
            cout << ans.size() << endl;
            for (auto itr : ans)
                cout << itr.first << " " << itr.second << endl;
        }
    }

    return 0;
}
