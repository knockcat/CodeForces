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
        map<int, int> mp;

        auto primeFactorisation = [&](int x)
        {
            for (int i = 2; i * i <= x; ++i)
            {
                while (x % i == 0)
                {
                    ++mp[i];
                    x /= i;
                }
            }

            if (x > 1)
                ++mp[x];
        };

        for (auto &itr : v)
        {
            cin >> itr;
            primeFactorisation(itr);
        }

        int ans = 0, ext = 0;

        for (auto itr : mp)
        {
            ans += itr.second / 2;
            ext += itr.second % 2;
        }

        cout << ans + ext / 3 << endl;
    }
    return 0;
}