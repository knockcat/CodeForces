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
        // Knockcat
        int n;
        cin >> n;
        
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int ans = 0;

        for (auto itr : v)
        {
            if (mp[itr - 1] > 0)
            {
                ++mp[itr];
                --mp[itr - 1];
            }
            else
            {
                ++ans;
                ++mp[itr];
            }
        }

        cout << ans << endl;
    }
    return 0;
}