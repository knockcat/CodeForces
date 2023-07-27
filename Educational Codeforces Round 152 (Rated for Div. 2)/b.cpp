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

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        ll n, k;
        cin >> n >> k;

        vector<pair<ll, ll>> vp;

        for (int i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;

            vp.push_back({x, i + 1});
        }

        for (int i = 0; i < n; ++i)
        {
            vp[i].first %= k;
        }

        sort(vp.begin(), vp.end(), [&](const auto &a, const auto &b)
             {
            if(a.first > b.first)
                return 1;
            if(a.first == b.first)
            {
                if(a.second < b.second)
                    return 1;
                return 0;
            }
            return 0; });

        vector<int> ans;

        for (auto itr : vp)
        {
            if (itr.first <= 0)
                ans.push_back(itr.second);
        }

        for (auto itr : vp)
        {
            if (itr.first > 0)
                ans.push_back(itr.second);
        }

        for (auto itr : ans)
            cout << itr << ' ';
        cout << endl;
    }
    return 0;
}