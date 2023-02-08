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
    // ll tt;
    // cin >> tt;
    // while (tt--)
    // {
    // }

    int n, l;
    cin >> n >> l;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());
    double first = v[0] - 0;
    double last = l - v[v.size() - 1];

    double ans = 0.0;

    for (int i = 1; i < n; ++i)
    {
        ans = max(ans, (double)(v[i] - v[i - 1]) / 2.0);
    }
    ans = max({first, last, ans});

    cout << fixed << setprecision(10) << ans << endl;
}
