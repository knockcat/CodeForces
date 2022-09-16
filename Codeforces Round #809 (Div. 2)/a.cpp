#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl "\n"
#define mod 1e97
#define int long long int
int32_t main()
{
    // KNOCKCAT

    fast;
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        string ans;
        set<int>st;

        for (int i = 0; i < m; ++i)
            ans += 'B';

        for (int i = 0; i < n; ++i)
        {
            if (v[i] > m / 2)
                v[i] = (m + 1 - v[i]);
            if (st.find(v[i]) != st.end())
            {
                ans[m - v[i]] = 'A';
                st.insert(m - v[i] + 1);
            }
            else
            {
                ans[v[i] - 1] = 'A';
                st.insert(v[i]);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
