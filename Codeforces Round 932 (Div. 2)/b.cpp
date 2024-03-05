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

        map<int, int> mp;

        int res = 0;
        for (auto &ele : v)
        {
            cin >> ele;
            ++mp[ele];
        }

        int ele = -1;
        for (int i = 0; i <= n; ++i)
        {
            if (mp.find(i) == mp.end())
            {
                ele = i;
                break;
            }
        }

        set<int> st;
        for (int i = 0; i < ele; ++i)
            st.insert(i);

        // for (auto &it : st)
        //     cout << it << ' ';
        // cout << endl;
        set<int> cur = st;

        if (ele == 0)
        {
            cout << n << endl;
            for (int i = 0; i < n; ++i)
                cout << i + 1 << ' ' << i + 1 << endl;
        }
        else
        {

            int last = -1;
            vector<pair<int, int>> ans;
            for (int i = 0; i < n; ++i)
            {
                if (st.count(v[i]))
                {
                    st.erase(v[i]);
                }
                if (st.empty())
                {
                    last = i + 1;
                    break;
                }
            }

            if (last == -1)
            {
                cout << -1 << endl;
                continue;
            }
            for (int i = last; i < n; ++i)
            {
                if (cur.count(v[i]))
                    cur.erase(v[i]);
            }

            if (cur.empty())
            {
                cout << 2 << endl;
                cout << 1 << ' ' << last << endl;
                cout << last + 1 << " " << n << endl;
            }
            else
                cout << -1 << endl;
        }
    }
    return 0;
}