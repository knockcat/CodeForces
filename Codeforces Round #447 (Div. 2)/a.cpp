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

int helper(string str, string pat, int n, int m, vector<vector<int>> &dp)
{

    if (n == 0 and m == 0)
        return 1;
    if (m == 0)
        return 1;

    if (n == 0)
        return 0;
    if (dp[n][m] != -1)
        return dp[n][m];
    int notTake = helper(str, pat, n - 1, m, dp);
    int take = 0;
    if (str[n - 1] == pat[m - 1])
        take = helper(str, pat, n - 1, m - 1, dp);

    return dp[n][m] = take + notTake;
}

int32_t main()
{
    fast;
    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    // knockcat

    // }

    string str;
    cin >> str;
    string pattern = "QAQ";
    vector<vector<int>> dp(str.size() + 1, vector<int>(pattern.size() + 1, -1));
    helper(str, pattern, str.size(), pattern.size(), dp);
    cout << dp[str.size()][pattern.size()] << endl;
}
