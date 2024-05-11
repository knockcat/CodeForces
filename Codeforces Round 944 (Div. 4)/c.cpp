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

bool check(int a, int b, int c)
{
    while (a != b)
    {
        if (a == c)
            return true;
        ++a;
        if (a == 13)
            a = 1;
    }
    return false;
}

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (check(a, b, c) and check(b, a, d) or check(a, b, d) and check(b, a, c))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

// 1 2 3 4 5 6 7 8 9 10 11 12 11 10 9 8 7 6 5 4 3 2 1