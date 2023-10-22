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

int solve(vector<int> &v, int k)
{
    int n = v.size();
    int ans = k;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] % k == 0)
        {
            ans = 0;
            break;
        }
        else
            ans = min(ans, k - v[i] % k);
    }
    return ans;
}

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

        vector<int> v(n);

        for (auto &itr : v)
            cin >> itr;

        int val = solve(v, k);

        if (k == 4)
        {
            int cnt = 0, ans = 2;
            for (int i = 0; i < n; ++i)
            {
                if (v[i] % 2 == 0)
                {
                    ++cnt;
                }
            }

            ans -= cnt;

            cout << min(val, max(ans, 0ll)) << endl;
        }
        else
            cout << val << endl;
    }
    return 0;
}