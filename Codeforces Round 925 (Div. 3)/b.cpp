// JAI SHREE RAM
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
const ll eps = -1e9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine

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

        ll sum = 0;
        for (auto &ele : v)
        {
            cin >> ele;
            sum += ele;
        }

        int individual = sum / n;

        ll ext = 0;

        bool ok = true;

        for (int i = 0; i < n; ++i)
        {
            if (v[i] >= individual)
            {
                ext += (v[i] - individual);
            }
            else
            {
                ll need = individual - v[i];
                if (ext >= need)
                {
                    ext -= need;
                }
                else
                    ok = false;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}