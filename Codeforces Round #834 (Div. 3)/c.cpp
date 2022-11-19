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
        // Knockcat
        int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;

        if (a == b)
            cout << 0 << "\n";
        else if (abs(a - b) >= x)
            cout << 1 << "\n";
        else if (abs(l - a) >= x and abs(l - b) >= x)
            cout << 2 << "\n";
        else if (abs(r - a) >= x and abs(r - b) >= x)
            cout << 2 << "\n";
        else if (abs(l - a) >= x and abs(r - b) >= x)
            cout << 3 << "\n";
        else if (abs(r - a) >= x and abs(l - b) >= x)
            cout << 3 << "\n";
        else
            cout << -1 << "\n";
    }

    return 0;
}
