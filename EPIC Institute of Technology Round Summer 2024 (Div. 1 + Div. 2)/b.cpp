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

        vector<int> pref(n);

        multiset<int> st;

        for (int i = 1; i < n; ++i)
        {
            if (v[i] < v[i - 1])
            {
                pref[i] = abs(v[i] - v[i - 1]);
                v[i] = v[i - 1];
                if (pref[i])
                    st.insert(pref[i]);
            }
        }

        int val = 0;
        ll ans = 0;
        while (!st.empty())
        {
            int x = *st.begin();

            int rem = (x - val);
            if (rem > 0)
            {
                ans += (rem * 1LL * (st.size() + 1));
                val += rem;
            }

            st.erase(st.begin());
        }
        cout << ans << endl;
    }
    return 0;
}