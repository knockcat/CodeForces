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
        ll n, m, k;
        cin >> n >> m >> k;
        int maxi = 0;
        int maxiF = 0;

        vector<ll> v(m);

        for (int i = 0; i < m; ++i)
            cin >> v[i];

        if (n % k == 0)
        {
            maxiF = n / k;
            maxi = k;
        }
        else
        {
            maxiF = (n / k) + 1;
            maxi = n % k;
        }

        bool ok = true;
        ll count = 0;
        for (int i = 0; i < m; ++i)
        {
            if (v[i] > maxiF)
            {
                ok = false;
                break;
            }
            else if (v[i] == maxiF)
            {
                --maxi;
            }
        }

        if (maxi < 0)
            ok = false;

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
