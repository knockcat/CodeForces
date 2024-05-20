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
const ll maxn = 1e5 + 10;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine -> Success :D

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;

        vector<int> v(n);
        for (auto &ele : v)
            cin >> ele;

        map<int, map<int, map<int, int>>> mp;

        for (int i = 2; i < n; ++i)
        {
            ++mp[v[i - 2]][v[i - 1]][-1];
            ++mp[v[i - 2]][-1][v[i]];
            ++mp[-1][v[i - 1]][v[i]];
            ++mp[v[i - 2]][v[i - 1]][v[i]];
        }

        ll ans = 0;

        for (int i = 2; i < n; ++i)
        {
            int case1 = 0, case2 = 0, case3 = 0;

            int have = mp[v[i - 2]][v[i - 1]][v[i]];

            case1 = mp[v[i - 2]][v[i - 1]][-1];
            case2 = mp[v[i - 2]][-1][v[i]];
            case3 = mp[-1][v[i - 1]][v[i]];

            ll curr = case1 + case2 + case3 - (3 * 1LL * have);

            --mp[v[i - 2]][v[i - 1]][-1];
            --mp[v[i - 2]][-1][v[i]];
            --mp[-1][v[i - 1]][v[i]];
            --mp[v[i - 2]][v[i - 1]][v[i]];

            ans += curr;
        }

        cout << ans << endl;
    }
    return 0;
}