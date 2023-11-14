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

        int n;
        cin >> n;

        vector<int> vec(n);
        for (auto &itr : vec)
            cin >> itr;

        ll res = 0;

        for (int j = 0; j < n; ++j)
        {
            int two = 0;

            ll sum = 0;
            vector<int> v = vec;
            for (int i = 0; i < n; ++i)
            {
                if (i == j)
                    continue;
                while (v[i] % 2 == 0)
                {
                    ++two;
                    v[i] /= 2;
                }
                sum += v[i];
            }
            if (!two)
                sum += v[j];
            else
                sum = sum + (v[j] * 1LL * 1 << two);

            res = max(res, sum);
        }

        cout << res << endl;
    }
    return 0;
}