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
        int l, r;
        cin >> l >> r;

        vector<int> v(n);
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < n - 1; ++i)
        {
            auto itr1 = lower_bound(v.begin() + i + 1, v.end(), l - v[i]);
            auto itr2 = upper_bound(v.begin() + i + 1, v.end(), r - v[i]);
            ans += (itr2 - itr1);
        }

        cout << ans << endl;
    }

    return 0;
}
