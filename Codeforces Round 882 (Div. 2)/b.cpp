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

        int n;
        cin >> n;

        vector<int> v(n);

        for (auto &itr : v)
        {
            cin >> itr;
        }

        int here = v[0], cnt = 0;

        for (int i = 1; i < n; ++i)
            here &= v[i];

        if (here)
        {
            cout << 1 << endl;
            continue;
        }

        int cur = 0;

        bool ok = false;
        for (int i = 0; i < n; ++i)
        {
            int cur = v[i++];

            while (i < n and cur)
            {
                cur &= v[i++];
            }
            --i;

            if (!cur)
                ++cnt;
        }

        cout << cnt << endl;
    }
    return 0;
}