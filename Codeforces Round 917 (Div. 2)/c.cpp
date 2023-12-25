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

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n, k, d;
        cin >> n >> k >> d;

        vector<int> v(n);
        for (auto &itr : v)
            cin >> itr;

        vector<int> b(k);
        for (auto &itr : b)
            cin >> itr;

        int ans = 0;

        for (int i = 0; i < d; ++i)
        {
            if (n + (d - i - 1) / 2 <= ans)
                break;

            int cnt = 0;

            for (int j = 0; j < n; ++j)
            {
                if (v[j] == (j + 1))
                    ++cnt;
            }

            ans = max(ans, cnt + ((d - i - 1) / 2));

            for (int j = 0; j < b[i % k]; ++j)
                v[j] += 1;
        }

        cout << ans << endl;
    }
    return 0;
}