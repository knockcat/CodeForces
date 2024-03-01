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

// If I'll be good at programming she will be mine

int helper(int sum, vector<int> &coins, vector<int> &dp)
{
    if (sum == 0)
        return 0;
    if (dp[sum] != -1)
        return dp[sum];

    int ans = INT_MAX;

    for (int j = 0; j < coins.size(); ++j)
    {
        if (sum >= coins[j])
        {
            int take = 1 + helper(sum - coins[j], coins, dp);
            ans = min(ans, take);
        }
    }

    return dp[sum] = ans;
}

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        ll n;
        cin >> n;

        int sz = 2000;
        vector<int> dp(sz + 1, -1);

        dp[0] = 0;

        vector<int> coins = {1, 3, 6, 10, 15};

        helper(sz, coins, dp);

        ll ans = INT_MAX;

        if (n <= sz)
        {
            cout << dp[n] << endl;
            continue;
        }
        ll have = n / 900;

        if (have >= 2)
        {
            ll remain = n % 900;

            ll canForm = (have - 1) * 900;

            ll res = canForm / 15;

            res += dp[remain + 900];

            cout << res << endl;
            continue;
        }

        for (int i = 0; i < coins.size(); ++i)
        {
            ll canTake = n / coins[i];
            ll rem = n % coins[i];
            ll cost = dp[rem];

            ans = min(ans, canTake + cost);
        }
        // cout << endl;
    }
    return 0;
}