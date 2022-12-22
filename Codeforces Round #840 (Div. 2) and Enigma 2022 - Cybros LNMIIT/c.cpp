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

        vector<ll> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        ll maxi = -1;
        for (int i = 0; i < n; ++i)
            maxi = max(maxi, v[i]);

        if (n == 2)
        {
            int one = v[0] + v[1];
            int two = abs(v[0] - v[1]) * 2;

            cout << max(one, two) << endl;
        }
        else if (n == 3)
        {
            ll one = v[0] + v[1] + v[2];
            ll two = max(abs(v[1] - v[0]) * 3, abs(v[2] - v[1]) * 3);
            ll three = max(v[0] * 3, v[2] * 3);

            cout << max({one, two, three}) << endl;
        }
        else
            cout << maxi * n << endl;
    }
    return 0;
}
