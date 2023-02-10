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
        int n;
        cin >> n;
        if (n & 1)
        {
            cout << "YES" << endl;
            int first = 1;
            int second = 2 * n;
            while (first <= n)
            {
                cout << first << " " << second << endl;
                first += 2;
                second -= 1;
            }

            first = 2;
            while (first <= n)
            {
                cout << first << " " << second << endl;
                first += 2;
                second -= 1;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
