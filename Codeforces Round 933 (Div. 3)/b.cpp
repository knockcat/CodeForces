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

        for (int i = 1; i < n - 1; ++i)
        {
            int opLeft = v[i - 1];
            int curr = v[i] / 2;
            int right = v[i + 1];

            int canDo = min({opLeft, curr, right});

            v[i - 1] -= canDo;
            v[i] -= (2 * canDo);
            v[i + 1] -= canDo;
        }

        map<int, int> mp;

        for (auto &ele : v)
            ++mp[ele];

        if (mp[0] == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}