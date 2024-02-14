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
        map<int, int> mp;

        for (auto &itr : v)
        {
            cin >> itr;
            ++mp[itr];
        }

        auto find = [&](int val)
        {
            int cnt = 0;

            if (v[0] == val)
            {
                ++cnt;

                for (int i = 1; i < n; ++i)
                {
                    if (v[i] == v[i - 1])
                    {
                        ++cnt;
                    }
                    else
                        break;
                }
            }

            if (v[n - 1] == val)
            {
                ++cnt;

                for (int i = n - 2; i >= 0; --i)
                {
                    if (v[i] == v[i + 1])
                    {
                        ++cnt;
                    }
                    else
                        break;
                }
            }

            return cnt;
        };

        int one = find(v[0]), two = find(v[n - 1]);

        if (mp.size() == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << n - max(one, two) << endl;
        }
    }
    return 0;
}