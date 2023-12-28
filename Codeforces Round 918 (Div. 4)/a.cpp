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

// If you will be good at programming she will be yours

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        int a, b, c;
        cin >> a >> b >> c;

        unordered_map<int, int> mp;
        int ans = -1;
        ++mp[a];
        ++mp[b];
        ++mp[c];
        for (auto &itr : mp)
        {
            if (itr.second == 1)
                ans = itr.first;
        }

        cout << ans << endl;
    }
    return 0;
}