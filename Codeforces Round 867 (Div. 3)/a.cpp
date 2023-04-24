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

        int n, t;
        cin >> n >> t;

        vector<int> a(n), b(n);

        for (auto &itr : a)
            cin >> itr;

        for (auto &itr : b)
            cin >> itr;

        vector<pair<int, int>> vp;

        for (int i = 0; i < n; ++i)
        {
            if (i + a[i] <= t)
            {
                vp.push_back({b[i], i});
            }
        }

        sort(vp.rbegin(), vp.rend());

        if (vp.size() == 0)
            cout << -1 << endl;
        else
            cout << vp[0].second + 1 << endl;
    }
    return 0;
}