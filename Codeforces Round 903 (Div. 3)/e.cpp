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

int ans = INT_MAX;

int helper(int idx, int n, vector<int> &v, vector<int> &dp)
{
    if (idx == n)
        return 0;

    if (dp[idx] != -1)
        return dp[idx];

    int notTake = 1 + helper(idx + 1, n, v, dp);
    int take = INT_MAX;

    if (v[idx] + idx < n)
        take = helper(v[idx] + idx + 1, n, v, dp);

    return dp[idx] = min(take, notTake);
}

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

        vector<int> v(n);

        for (auto &itr : v)
            cin >> itr;

        vector<int> dp(n + 1, -1);

        cout << helper(0, n, v, dp) << endl;
    }
    return 0;
}