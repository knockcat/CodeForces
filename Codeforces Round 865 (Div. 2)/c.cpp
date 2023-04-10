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

        bool ok = false;
        if (n & 1)
            ok = true;
        else
        {
            for (int i = 1; i < n - 1; ++i)
            {
                int diff = v[i - 1] - v[i];
                v[i] += diff;
                v[i + 1] += diff;
            }

            if (v[n - 1] >= v[n - 2])
                ok = true;
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}