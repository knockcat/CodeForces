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

        vector<vector<ll>> v(2, vector<ll>(n));

        ll end = 2 * n;

        v[0][0] = end;
        v[1][n - 1] = end - 1;

        ll start = 1;
        end = (2 * n) - 2;

        for (int i = 0; i < n - 1; ++i)
        {
            if (i % 2 == 0)
            {
                v[0][i + 1] = start + 1;
                v[1][i] = start;

                start += 2;
            }
            else
            {
                v[0][i + 1] = end;
                v[1][i] = end - 1;

                end -= 2;
            }
        }

        for (auto itr : v)
        {
            for (auto x : itr)
                cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}