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

int helper(int idx, int rem, string &str, vector<vector<int>> &dp)
{
    if (idx == (int)str.size())
    {
        return rem % 9 == 0;
    }

    if (dp[idx][rem] != -1)
        return dp[idx][rem];

    int num = str[idx] - '0';
    bool simple = helper(idx + 1, (rem + num) % 9, str, dp);
    bool convert = false;
    if (num == 2)
        convert = helper(idx + 1, (rem + 4) % 9, str, dp) or helper(idx + 1, (rem + num) % 9, str, dp);
    else if (num == 3)
        convert = helper(idx + 1, (rem + 9) % 9, str, dp) or helper(idx + 1, (rem + num) % 9, str, dp);

    return dp[idx][rem] = simple | convert;
}

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        string str;
        cin >> str;
        int n = str.size();
        vector<vector<int>> dp(n + 1, vector<int>(10, -1));
        bool ans = helper(0, 0, str, dp);
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}