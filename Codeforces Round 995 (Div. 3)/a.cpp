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
const ll maxn = 1e5 + 10;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine -> Success :D

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &ele : a)
            cin >> ele;
        for (auto &ele : b)
            cin >> ele;
        bool ok = true;
        int ans = a[n - 1];
        int m = a[n - 1], s = 0;
        while (ok)
        {
            ok = false;
            int diff = 0;
            int idx = -1;
            int j = 1;
            for (int i = 0; i < n; ++i, ++j)
            {
                if (a[i] == -1)
                    continue;
                if (j < n)
                {
                    if (a[i] - b[j] > diff)
                    {
                        // cout << a[i] << ' ' << b[j] << endl;
                        ok = true;
                        idx = i;
                        diff = a[i] - b[j];
                    }
                }
            }

            if (ok)
            {
                m += a[idx];
                s += b[idx + 1];
                a[idx] = -1;
            }
            ans = max(ans, m - s);
        }

        cout << ans << endl;
    }
    return 0;
}