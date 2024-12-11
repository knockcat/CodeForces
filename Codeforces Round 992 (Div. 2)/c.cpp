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

void helper(int i, int l, int r, int k, vector<int> &ans)
{
    if (l == r)
    {
        ans[l] = i;
        return;
    }

    int len = r - l - 1;
    if (len < 60 and (1LL << len) < k)
    {
        ans[r] = i;
        helper(i + 1, l, r - 1, k - (1LL << len), ans);
    }
    else
    {
        ans[l] = i;
        helper(i + 1, l + 1, r, k, ans);
    }
}

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        ll n, k;
        cin >> n >> k;

        if (n - 1 < 60 and (1LL << (n - 1)) < k)
            cout << -1 << '\n';
        else
        {
            vector<int> v(n);
            helper(1, 0, n - 1, k, v);
            for (auto &ele : v)
                cout << ele << ' ';
            cout << '\n';
        }
    }
    return 0;
}