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
        ll n;
        cin >> n;
        vector<ll> v(n), pref;

        int cnt = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] == 2)
                ++cnt;
        }
        int ans = -1;
        if (cnt & 1)
        {
            cout << ans << endl;
            continue;
        }

        int curr = 0;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] == 2)
                ++curr;
            if (curr == cnt / 2)
            {
                ans = i;
                break;
            }
        }

        cout << ans + 1 << endl;
    }
    return 0;
}
