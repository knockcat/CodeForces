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
    vector<int> a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    vector<int> c(n);
    for (int i = 0; i < n; ++i)
    {
        c[i] = a[i] - b[i];
    }
    sort(c.begin(), c.end());

    long long ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (c[i] <= 0)
            continue;
        int pos = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
        ans += i - pos;
    }

    cout << ans << endl;
    return 0;
}