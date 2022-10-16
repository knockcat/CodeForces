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
        int n, q;
        cin >> n >> q;

        vector<int> v(n);
        vector<int> even;
        vector<int> odd;
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            sum += v[i];

            if (v[i] & 1)
                odd.push_back(v[i]);
            else
                even.push_back(v[i]);
        }

        int evcount = even.size();
        int odcount = odd.size();
        while (q--)
        {
            int type, val;
            cin >> type >> val;

            if (type == 0)
            {
                if (val % 2 == 0)
                {
                    sum += (evcount * val);
                }
                else
                {
                    sum += (evcount * val);
                    odcount += evcount;
                    evcount = 0;
                }
            }
            else
            {
                if (val % 2 == 0)
                {
                    sum += (odcount * val);
                }
                else
                {
                    sum += (odcount * val);
                    evcount += odcount;
                    odcount = 0;
                }
            }

            cout << sum << '\n';
        }
    }
    return 0;
}