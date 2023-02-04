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
    ll tt;
    cin >> tt;
    while (tt--)
    {

        int n, coins;
        cin >> n >> coins;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        vector<int> pref(n);

        for (int i = 0; i < n; ++i)
        {
            // steps
            pref[i] = v[i] + i + 1;
        }

        sort(pref.begin(), pref.end());

        int count = 0;

        for (int i = 0; i < n; ++i)
        {
            if (coins >= pref[i])
            {
                ++count;
                coins -= pref[i];
            }
            else
                break;
        }

        cout << count << endl;
    }

    return 0;
}
