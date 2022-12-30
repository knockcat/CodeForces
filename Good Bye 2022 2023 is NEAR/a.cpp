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

        ll n, m;
        cin >> n >> m;

        vector<ll> a(n), b(m);

        ll sum = 0;
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < m; ++i)
            cin >> b[i];
        for (int i = 0; i < m; ++i)
        {
            int mini = min_element(a.begin(), a.end()) - a.begin();
            // cout << mini << endl;
            a[mini] = b[i];
        }

        for (int i = 0; i < n; ++i)
        {
            sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}