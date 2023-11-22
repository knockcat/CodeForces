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

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int a, b, c;
        cin >> a >> b >> c;

        if (abs(b - c) % 2 == 0)
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
        if (abs(a - c) % 2 == 0)
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
        if (abs(a - b) % 2 == 0)
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
        cout << endl;
    }
    return 0;
}