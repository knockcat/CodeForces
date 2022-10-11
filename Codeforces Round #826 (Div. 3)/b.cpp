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
        int n;
        cin >> n;

        if (n == 1 or n == 3)
            cout << -1 << endl;
        else if (n & 1)
        {
            for (int i = n; i > n / 2 + 1; --i)
            {
                cout << i << " ";
            }
            for (int i = 1; i <= n / 2 + 1; ++i)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            for (int i = n; i > 0; --i)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}