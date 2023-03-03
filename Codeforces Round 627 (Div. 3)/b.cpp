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
const ll eps = 1e-9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

int helper(int i, int j, int n, int m, vector<int> &v, vector<int> &rev, vector<vector<int>> &dp)
{
    if (i >= n or j >= m)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (v[i] == rev[j])
        return dp[i][j] = 1 + helper(i + 1, j + 1, n, m, v, rev, dp);
    else
        return dp[i][j] = max(helper(i + 1, j, n, n, v, rev, dp), helper(i, j + 1, n, n, v, rev, dp));
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
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        vector<int> rev = v;
        reverse(rev.begin(), rev.end());
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        // cout << helper(0, 0, n, n, v, rev, dp) << endl;
        cout << (helper(0, 0, n, n, v, rev, dp) >= 3 ? "YES" : "NO") << endl;
    }
    return 0;
}