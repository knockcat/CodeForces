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

    while (tt--)
    {
        // knockcat
        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        int n2 = n, a2 = a, b2 = b;

        // cout << a << " " << b << endl;

        int canTakeA = min(a - x, n);
        a -= canTakeA;
        n -= canTakeA;
        int canTakeB = min(b - y, n);
        b -= canTakeB;

        // cout << a << " " << b << endl;

        long long prod = (ll)a * b;
        // cout << prod << endl;

        int canTakeB2 = min(b2 - y, n2);
        b2 -= canTakeB2;
        n2 -= canTakeB2;
        int canTakeA2 = min(a2 - x, n2);
        a2 -= canTakeA2;

        // cout << a << " " << b << endl;

        long long prod2 = (ll)a2 * b2;
        // cout << prod2 << endl;

        cout << min(prod, prod2) << endl;
    }
    return 0;
}