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
        map<int, int> mp;
        set<int> st;

        for (auto &itr : v)
        {
            cin >> itr;
            ++mp[itr];

            st.insert(itr);
        }

        ll ans = 0;

        for (auto itr : st)
        {
            for (int j = 2; j <= 1000; ++j)
            {
                ll one = itr * j, two = itr * j * j;
                if (one >= 1000006 or two >= 1000006)
                    break;
                if (mp.find(one) != mp.end() and mp.find(two) != mp.end())
                {
                    ans += mp[itr] * mp[one] * mp[two];
                }
            }

            if (mp[itr] >= 3)
            {
                ans += (mp[itr] * (mp[itr] - 1) * (mp[itr] - 2));
            }
        }

        cout << ans << endl;
    }
    return 0;
}