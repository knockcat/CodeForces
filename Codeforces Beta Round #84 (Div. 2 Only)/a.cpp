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
    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    // knockcat

    int n;
    cin >> n;

    int count = 0;

    while (n > 0)
    {
        if (n % 10 == 7 or n % 10 == 4)
        {
            ++count;
        }

        n /= 10;
    }

    if (count == 4 or count == 7)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    // }

    return 0;
}