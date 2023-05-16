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

        for (auto &itr : v)
            cin >> itr;

        sort(v.begin(), v.end());

        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            unordered_map<int, int> mp;

            int ans = 1;

            for (auto itr : v)
                ++mp[itr];

            int maxi = 0;

            for (auto itr : mp)
                maxi = max(maxi, itr.second);

            unordered_set<int> s(v.begin(), v.end());
            int sz = s.size() - 1;

            ans = min(maxi, sz);

            int diff = maxi - sz;

            if (diff >= 2)
                ++ans;

            cout << ans << endl;
        }
    }
    return 0;
}