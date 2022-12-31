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

ll gcd(ll a, ll b)
{
    if ((a % b) == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        ll n, i, j, g, f;
        cin >> n;

        ll a[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        g = a[0];

        for (i = 2; i < n; i += 2)
        {
            g = gcd(g, a[i]);
        }

        if (g > 1)
        {
            f = 0;

            for (i = 1; i < n; i += 2)
            {
                if ((a[i] % g) == 0)
                {
                    f++;
                    break;
                }
            }

            if (f == 0)
            {
                cout << g << "\n";
                continue;
            }
        }

        g = a[1];

        for (i = 3; i < n; i += 2)
        {
            g = gcd(g, a[i]);
        }

        if (g > 1)
        {
            f = 0;

            for (i = 0; i < n; i += 2)
            {
                if ((a[i] % g) == 0)
                {
                    f++;
                    break;
                }
            }

            if (f == 0)
            {
                cout << g << "\n";
                continue;
            }
        }

        cout << "0\n";
    }

    return 0;
}
