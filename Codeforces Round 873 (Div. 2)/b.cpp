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

        map<int, int> mp;

        // for (int i = 0; i < n; ++i)
        // {
        //     ++mp[abs(v[i] - (i + 1))];
        // }

        // // cout << endl;
        // // for (auto itr : mp)
        // //     cout << itr.first << " " << itr.second << endl;
        // // cout << endl;

        // for (auto itr : mp)
        // {
        //     if (itr.second > ans and itr.first != 0)
        //     {
        //         ans = max(ans, itr.second);
        //         res = itr.first;
        //     }
        // }

        for (int i = 0; i < n; ++i)
            mp.insert({v[i], i + 1});

        vector<int> diff;

        for (int i = 0; i < n; ++i)
        {
            diff.push_back(abs((i + 1) - mp[i + 1]));
        }

        int ans = diff[0];
        for (auto itr : diff)
            ans = __gcd(ans, itr);

        cout << ans << endl;
    }
    return 0;
}