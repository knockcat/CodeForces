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

        int n, x, y;
        cin >> n >> x >> y;

        vector<int> v(n);

        map<pair<int, int>, int> mp;

        for (auto &ele : v)
            cin >> ele;

        int ans = 0;

        for (auto &ele : v)
        {
            int modx = (x - (ele % x)) % x;
            int mody = ele % y;

            ans += mp[{modx, mody}];

            ++mp[{ele % x, ele % y}];
        }

        cout << ans << endl;
    }
    return 0;
}