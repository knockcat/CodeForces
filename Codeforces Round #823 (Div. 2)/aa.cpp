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
        int n, c;
        cin >> n >> c;
        map<int, int> mp;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            ++mp[v[i]];
        }
        int ans = 0;
        for (auto itr : mp)
        {
            if (itr.second > 1)
            {
                ans += min(itr.second,c);
            }
            else
            {
                ans++;
            }
        }

        cout << min(ans,n) << endl;
    }
    return 0;
}
