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

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int maxi = INT_MIN;

        int n;
        cin >> n;

        vector<int> v(n);

        for (auto &itr : v)
        {
            cin >> itr;

            maxi = max(maxi, itr);
        }

        if (maxi > n)
        {
            cout << "NO" << endl;
            continue;
        }

        vector<int> dp(n + 1, 0);

        dp[0] = n;

        bool ok = true;

        for (auto &itr : v)
            --dp[itr];

        for (int i = 1; i < n; ++i)
            dp[i] += dp[i - 1];

        // for(auto& itr : dp)
        //     cout<<itr<<' ';
        // cout<<endl;

        for (int i = 0; i < n; ++i)
        {
            if (dp[i] != v[i])
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}