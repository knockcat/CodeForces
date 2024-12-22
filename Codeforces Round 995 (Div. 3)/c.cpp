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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(m);
        for (auto &ele : v)
            cin >> ele;
        vector<int> q(k);
        set<int> st;
        for (int i = 0; i < n; ++i)
            st.insert(i + 1);
        for (auto &ele : q)
        {
            cin >> ele;
            st.erase(ele);
        }
        if (k == n)
        {
            string ans(n, '1');
            cout << ans << endl;
        }
        else
        {
            string str;
            for (int i = 0; i < m; ++i)
            {
                int have = (int)st.size();
                if (st.count(v[i]))
                    --have;
                if (have == 0)
                    str += '1';
                else
                    str += '0';
            }
            cout << str << endl;
        }
    }
    return 0;
}