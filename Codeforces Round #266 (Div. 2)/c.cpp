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
    ll a[n + 2], sum[n + 2];
    sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    if (sum[n] % 3 != 0)
    {
        cout << "0\n";
        return 0;
    }
    ll s = sum[n] / 3;
    ll ss = s + s;
    ll cnt = 0, ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (sum[i] == ss)
            ans += cnt;
        if (sum[i] == s)
            cnt++;
    }
    cout << ans << endl;

    return 0;
}