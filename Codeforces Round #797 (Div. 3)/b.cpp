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

bool f()
{
    int dif = INT_MAX;
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    for (int i = 0; i < n; ++i)
    {
        if (b[i] != 0)
            dif = min(dif, a[i] - b[i]);
    }
    if (dif < 0)
        return false;
    if (dif == inf)
        return true;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] - b[i] > dif)
            return false;
        if (b[i] != 0 && a[i] - b[i] < dif)
            return false;
    }
    return true;
}

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        if (f())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}