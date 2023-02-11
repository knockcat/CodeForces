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

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int a, b, c, n, k, rem;
    cin >> n >> a >> b >> c;

    int ans = 0;
    for (int i = 0; i * a <= n; ++i)
    {
        for (int j = 0; i * a + j * b <= n; ++j)
        {
            rem = n - i * a - j * b;
            if (rem % c == 0)
            {
                k = rem / c;
                ans = max(ans, i + j + k);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
