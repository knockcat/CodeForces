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

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        string str;

        cin >> str;

        int n = str.size();

        set<char> st;

        int cnt = 1;

        for (int i = 1; i < n; ++i)
        {
            if (str[i] == str[i - 1])
            {
                ++cnt;
            }
            else
            {
                if (cnt & 1)
                {
                    st.insert(str[i - 1]);
                }
                cnt = 1;
            }
        }

        if (cnt & 1)
        {
            st.insert(str[n - 1]);
        }

        for (auto &itr : st)
            cout << itr;

        cout << endl;
    }
    return 0;
}