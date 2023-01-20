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

        int sum = 0;
        vector<int> v(n);
        map<int, int> mp;

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            sum += v[i];
        }

        int need = (2 * sum) / n;

        if (((sum - need) * n) != sum * (n - 2))
            cout << 0 << endl;
        else
        {
            int ans = 0;
            for (int i = 0; i < n; ++i)
            {
                ans += mp[need - v[i]];
                ++mp[v[i]];
            }
            cout << ans << endl;
        }
    }

    return 0;
}
