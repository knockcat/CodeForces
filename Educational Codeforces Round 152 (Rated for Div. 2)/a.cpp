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

        int b, c, h;
        cin >> b >> c >> h;

        int bet = c + h;

        int ans = 0;

        bool ok = false;

        for (int i = 0; i < bet; ++i)
        {
            if (!ok and b >= 2)
            {
                ok = true;
                ans += 3;
                b -= 2;
            }
            else if (ok and b >= 1)
            {
                b -= 1;
                ans += 2;
            }
            else
                break;
        }

        cout << ans << endl;
    }
    return 0;
}