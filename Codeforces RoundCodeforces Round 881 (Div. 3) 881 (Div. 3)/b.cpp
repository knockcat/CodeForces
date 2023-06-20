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

        int sum = 0;

        vector<int> v(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            sum += abs(v[i]);
        }

        int cnt = 0, yes = 0;
        bool ok = false;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] <= 0)
            {
                ++cnt;
                if (v[i] < 0)
                    ok = true;
            }
            else
            {
                if (ok)
                {
                    ++yes;
                    cnt = 0;
                    ok = false;
                }
            }
        }

        if (cnt >= 1 and ok)
            ++yes;

        cout << sum << ' ' << yes << endl;
    }
    return 0;
}