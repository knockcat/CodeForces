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

ll expo(ll x, ll y, ll mod)
{
    int res = 1;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % mod;
        x = (x * x) % mod;

        y >>= 1;
    }
    return res;
}

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

        if (n & 1)
        {
            vector<int> ans;

            while (n > 1)
            {
                int x = (n + 1) / 2, y = (n - 1) / 2;

                if (x & 1)
                {
                    ans.push_back(1);
                    n = x;
                }
                else
                {
                    ans.push_back(2);
                    n = y;
                }
            }

            reverse(ans.begin(), ans.end());
            cout << ans.size() << endl;
            for (auto itr : ans)
                cout << itr << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}