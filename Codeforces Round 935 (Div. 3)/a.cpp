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
const ll maxn = 1e5 + 10;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine -> Success :D

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        int a, b, c;
        cin >> a >> b >> c;

        int rem = b % 3;

        int typeB = b / 3;

        int need = (rem == 0 ? 0 : 3 - rem);

        if (need and c >= need)
        {
            c -= need;
            ++typeB;
        }
        else if (need and c < need)
        {
            cout << -1 << endl;
            continue;
        }

        int typeC = (c / 3) + ((c % 3) ? 1 : 0);
        cout << a + typeB + typeC << endl;
    }
    return 0;
}