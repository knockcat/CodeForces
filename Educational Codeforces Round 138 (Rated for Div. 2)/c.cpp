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

        vector<int> v(n);

        for (auto &ele : v)
            cin >> ele;

        sort(v.begin(), v.end());

        int ans = 0;

        if (n == 1)
            ans = 1;

        for (int k = 0; k < n; ++k)
        {
            // for this k we need (2 * k - 1) ele;

            if ((2 * k) - 1 > n)
                break;
            int curVal = k;
            bool ok = true;
            for (int i = (2 * k) - 2; i >= k - 1; --i)
            {
                if (v[i] <= curVal)
                {
                    --curVal;
                }
                else
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
                ans = max(ans, k);
        }

        cout << ans << endl;
    }
    return 0;
}