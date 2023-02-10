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

int helper(int num)
{
    ll ans = 0;
    while (num > 0)
    {
        ans += num % 10;
        num /= 10;
    }
    return ans;
}

int32_t main()
{
    fast;
    // ll tt;
    // cin >> tt;
    // while (tt--)
    // {
    // }

    int n;
    cin >> n;
    int curr = 0;
    while (n > 0)
    {
        ++curr;
        if (helper(curr) == 10)
            --n;
    }

    cout << curr << endl;

    return 0;
}
