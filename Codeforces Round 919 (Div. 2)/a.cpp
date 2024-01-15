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

        int n;
        cin >> n;

        ll less = INT_MAX, maxi = INT_MIN;

        set<ll> st;

        while (n--)
        {
            ll type, val;
            cin >> type >> val;

            if (type == 1)
                maxi = max(maxi, val);
            if (type == 2)
                less = min(less, val);
            if (type == 3)
                st.insert(val);
        }

        int range = less - maxi + 1;

        // cout << less << ' ' << maxi << endl;
        // cout<<range<<endl;

        for (auto &ele : st)
        {
            if (ele >= maxi and ele <= less)
                --range;
        }

        cout << max(0ll, range) << endl;
    }
    return 0;
}