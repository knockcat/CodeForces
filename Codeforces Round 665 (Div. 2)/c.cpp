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

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return (b, a % b);
}

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

        vector<int> v(n);

        for (auto &itr : v)
            cin >> itr;

        int mini = *min_element(v.begin(), v.end());

        bool ok = true;

        vector<int> b = v;

        sort(b.begin(), b.end());

        for (int i = 0; i < n; ++i)
        {
            if (v[i] != b[i] and v[i] % mini > 0)
            {
                ok = false;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}