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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int a, b, n, m;
        cin >> a >> b >> n >> m;
        if (m > n)
        {
            cout << min(a, b) * n << endl;
        }
        else
        {
            int ans = (n / (m + 1)) * (min(a * m, b * (m + 1)));
            ans += (n % (m + 1)) * min(a, b);
            cout << ans << endl;
        }
    }

    return 0;
}
