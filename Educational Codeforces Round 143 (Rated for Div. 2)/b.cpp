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
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> vp;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; ++i)
        {
            int l, r;
            cin >> l >> r;
            vp.push_back({l, r});
            // cout << l << " " << r << endl;
            if (l == k)
                ++cnt1;
            if (r == k)
                ++cnt2;
        }

        if (cnt1 and cnt2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}