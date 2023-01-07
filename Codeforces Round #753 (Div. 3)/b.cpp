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
        ll n, x, i, y, z = 0;
        cin >> x >> n;
        y = n % 4;
        if (y == 1)
            z = -n;
        else if (y == 2)
            z = 1;
        else if (y == 3)
            z = n + 1;
        if (x & 1)
            cout << x - z << endl;
        else
            cout << x + z << endl;
    }

    return 0;
}
