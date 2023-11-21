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

        string str;
        cin >> str;

        vector<int> v;
        int cnt = 0;
        bool ok = false;
        for (auto &itr : str)
        {
            if (itr == '.')
            {
                ++cnt;
            }
            else
            {
                v.push_back(cnt);
                cnt = 0;
            }
        }
        if (cnt)
            v.push_back(cnt);

        int ans = 0;

        for (auto &itr : v)
        {
            if (itr >= 3)
                ok = true;
            if (itr <= 2)
                ans += itr;
            else
                ans += 2;
        }

        if (ok)
            cout << 2 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}