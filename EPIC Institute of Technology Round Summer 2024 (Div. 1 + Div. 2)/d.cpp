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

int helper(int idx, int moves, vector<int> &v, map<int, int> &mp, vector<vector<int>> &dp)
{
    if (idx == v.size())
        return 0;

    if (dp[idx][moves] != -1)
        return dp[idx][moves];

    int totMoves = moves + 1;

    int rem = moves - mp[v[idx]];

    if (rem >= 0)
        return dp[idx][moves] = max(1 + helper(idx + 1, rem, v, mp, dp), helper(idx + 1, moves + 1, v, mp, dp));
    else
        return dp[idx][moves] = helper(idx + 1, moves + 1, v, mp, dp);
}

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;

        vector<int> v(n);
        map<int, int> mp;

        for (auto &ele : v)
        {
            cin >> ele;
            ++mp[ele];
        }

        sort(v.begin(), v.end());

        v.erase(unique(v.begin(), v.end()), v.end());

        n = v.size();

        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

        int ans = helper(0, 0, v, mp, dp);

        cout << mp.size() - ans << endl;
    }
    return 0;
}