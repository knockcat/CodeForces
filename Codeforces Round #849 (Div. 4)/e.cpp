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

int ans;
ll helper(ll idx, ll sum, ll n, vector<int> &v, vector<int> &dp)
{
    if (idx == n)
        return 0;
    // if (dp[idx] != -1)
    //     return dp[idx];
    int take = v[idx] + helper(idx + 1, sum, n, v, dp);
    int notTake = INT_MIN;
    if (idx + 1 < n)
    {
        int a = v[idx] * -1;
        int b = v[idx + 1] * -1;
        notTake = max(v[idx] + helper(idx + 1, sum, n, v, dp), a + b + helper(idx + 2, sum, n, v, dp));
    }

    return max(take, notTake);
}

int32_t main()
{
    fast;
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n), here;
        ll sum = 0, cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] < 0)
                ++cnt;
            sum += abs(v[i]);
            here.push_back(abs(v[i]));
        }
        // ll ans1 = sum;

        // vector<ll> dp(n + 1, -1);
        // cout << helper(0, sum, n, v, dp) << endl;

        sort(here.begin(), here.end());

        cout << (cnt & 1 ? sum - 2 * here[0] : sum) << endl;
    }
    return 0;
}
