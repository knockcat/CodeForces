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

// If I'll be good at programming she will be mine

int32_t main()
{
    // fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        ll n, m;
        cin >> n >> m;

        auto ask = [&](int x, int y)
        {
            cout << "? " << x << " " << y << endl;
            int minDist;
            cin >> minDist;
            return minDist;
        };

        int d1 = ask(1, 1);

        int row1, col1, row2, col2;

        if (d1 + 1 <= m)
        {
            row1 = 1;
            col1 = d1 + 1;
        }
        else
        {
            int dist = d1 + 1 - m;
            row1 = dist + 1;
            col1 = m;
        }

        if (d1 + 1 <= n)
        {
            row2 = d1 + 1;
            col2 = 1;
        }
        else
        {
            row2 = n;
            int dist = d1 + 1 - n;
            col2 = dist + 1;
        }

        int d2 = ask(row1, col1);
        int d3 = ask(row2, col2);

        int row3, col3, row4, col4;

        row3 = row1 + (d2 / 2);
        col3 = col1 - (d2 / 2);

        row4 = row2 - (d3 / 2);
        col4 = col2 + (d3 / 2);

        int d4 = ask(row3, col3);

        if (d4 == 0)
        {
            cout << "! " << row3 << " " << col3 << endl;
        }
        else
        {
            cout << "! " << row4 << " " << col4 << endl;
        }
    }
    return 0;
}
