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

        int n, m, i, j;
        cin >> n >> m >> i >> j;

        if (i == 1 and j == 1 or i == n and j == m)
            cout << 1 << " " << m << " " << n << " " << 1 << endl;
        else
        {
            cout << 1 << " " << 1 << " " << n << " " << m << endl;
        }
    }

    return 0;
}