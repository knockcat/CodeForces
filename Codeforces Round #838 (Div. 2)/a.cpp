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

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        long long n;
        cin >> n;
        vector<long long> v(n);
        long long sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            sum += v[i];
        }

        if (sum % 2 == 0)
            cout << 0 << endl;
        else
        {
            long long ans = INT_MAX;
            for (int i = 0; i < n; ++i)
            {
                long long count = 0;
                if (v[i] % 2 == 0)
                {
                    while (v[i] % 2 != 1)
                    {
                        v[i] = v[i] / 2;
                        ++count;
                    }
                }
                else
                {
                    while (v[i] % 2 != 0)
                    {
                        v[i] = v[i] / 2;
                        ++count;
                    }
                }
                if (count != 0)
                    ans = min(ans, count);
            }

            cout << ans << endl;
        }
    }

    return 0;
}
