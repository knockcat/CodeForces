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

// You better take more time but avoid penalties
// Look at Constraints

// If you will be good at programming she will be yours

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

        string init, res;
        cin >> init >> res;

        if (init == res)
            cout << 0 << endl;
        else
        {
            int cnt = 0, needzero = 0, needone = 0;

            for (int i = 0; i < n; ++i)
            {
                if (init[i] != res[i])
                {
                    needzero += (init[i] == '1');
                    needone += (init[i] == '0');
                }
            }

            // cout << needone << ' ' << needzero << endl;

            int canSwap = min(needone, needzero);

            int extra = needone + needzero - (2 * canSwap);

            int ans = canSwap + extra;

            cout << max(0ll, ans) << endl;
        }
    }
    return 0;
}