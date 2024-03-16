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
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        int ans = 0;

        for (int i = 1; i <= n / 2; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (j + i > n)
                    break;

                if (str[j - 1] == str[i + j - 1] or str[j - 1] == '?' or str[i + j - 1] == '?')
                {
                    dp[j][i + j] = dp[j - 1][i + j - 1] + 1;
                    if (dp[j][i + j] == i)
                        ans = max(ans, i);
                }
                else
                    dp[j - 1][i + j - 1] = 0;
            }
        }

        cout << (ans * 2) << endl;
    }
    return 0;
}