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

int helper(int i, int j, string &a, string &b, string &c, vector<vector<int>> &dp)
{
    if (i + j == (int)c.size())
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    int notMatchA = INT_MAX, notMatchB = INT_MAX;
    if (i < (int)a.size())
        notMatchA = 1 + helper(i + 1, j, a, b, c, dp);
    if (j < (int)b.size())
        notMatchB = 1 + helper(i, j + 1, a, b, c, dp);

    int matchA = INT_MAX, matchB = INT_MAX;
    if (i < (int)a.size() and a[i] == c[i + j])
        matchA = helper(i + 1, j, a, b, c, dp);
    if (j < (int)b.size() and b[j] == c[i + j])
        matchB = helper(i, j + 1, a, b, c, dp);

    return dp[i][j] = min({notMatchA, notMatchB, matchA, matchB});
}

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        string a, b, c;
        cin >> a >> b >> c;

        vector<vector<int>> dp(a.size() + 1, vector<int>(b.size() + 1, -1));
        cout << helper(0, 0, a, b, c, dp) << endl;
    }
    return 0;
}