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
    int sum1 = 0, sum2 = 0, sum3 = 0;
    while (tt--)
    {
        // knockcat
        int x, y, z;
        cin >> x >> y >> z;

        sum1 += x;
        sum2 += y;
        sum3 += z;
    }
    // cout << sum1 << " " << sum2 << " " << sum3 << endl;
    if (sum1 == 0 and sum2 == 0 and sum3 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}