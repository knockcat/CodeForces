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

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &itr : v)
        cin >> itr;

    int maxi = -1;

    vector<int> freq(100005, 0);
    for (int i = 0; i < n; ++i)
    {
        maxi = max(maxi, v[i]);
        ++freq[v[i]];
    }

    vector<int> dp(maxi + 1, 0);

    dp[1] = freq[1];

    for (int i = 2; i <= maxi; ++i)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + freq[i] * i);
    }
    cout << dp[maxi] << endl;

    return 0;
}