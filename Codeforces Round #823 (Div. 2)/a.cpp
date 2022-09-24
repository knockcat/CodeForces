#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl "\n"
#define mod 1e97
// #define int long long int
int32_t main()
{
    // KNOCKCAT

    fast;
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; ++i)
            cin >> v[i];

        sort(v.begin(), v.end());

        vector<int> diff(n - 1);
        for (int i = 1; i < n; ++i)
            diff[i - 1] = v[i] - v[i - 1];

        int mn = diff[0] + diff[1];

        // for(auto itr : diff)
        //     cout<<itr<<" ";
        // cout << endl;
        
        if (diff.size() == 2)
            cout << mn << endl;
        else
        {
            for (int i = 0; i < n - 2; ++i)
            {
                int ans = diff[i] + diff[i + 1];
                mn = min(mn, ans);
            }

            cout << mn << endl;
        }
    }
    return 0;
}
