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

        int n;

        cin >> n;

        vector<pair<int, int>> vp;

        for (int i = 0; i < n; ++i)
        {
            int x, y;
            cin >> x >> y;

            vp.push_back({x, y});
        }

        sort(vp.begin(), vp.end(), [&](const pair<int, int> &a, const pair<int, int> &b)
             {
            if(a.first != b.first)
                return a.first < b.first;
            return a.second > b.second; });

        ll prev = vp[0].first;

        ll cnt = 0, ans = 0;
        ;

        for (int i = 0; i < n; ++i)
        {
            ll curr = vp[i].first;

            if (curr == prev)
            {
                if (cnt < curr)
                {
                    ans += vp[i].second;
                    ++cnt;
                }
            }
            else if (curr == prev and cnt >= curr)
                ++cnt;
            else if (curr != prev)
            {
                cnt = 1;
                prev = curr;
                ans += vp[i].second;
            }
        }

        cout << ans << endl;
    }
    return 0;
}