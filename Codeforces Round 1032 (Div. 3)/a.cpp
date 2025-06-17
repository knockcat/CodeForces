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
        int n, s;
        cin >> n >> s;

        vector<int> v(n);
        bool ok = false;
        for (auto &ele : v)
        {
            cin >> ele;
            if (ele == s)
                ok = true;
        }

        if (!ok)
        {
            v.push_back(s);
            sort(v.begin(), v.end());
        }

        int idx = lower_bound(v.begin(), v.end(), s) - v.begin();
        int left = v[idx] - v[0];
        int right = v[v.size() - 1] - v[idx];
        int ans = 2 * min(left, right) + max(left, right);
        cout << ans << endl;
    }

    return 0;
}