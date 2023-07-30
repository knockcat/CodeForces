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
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;

        cin >> n;

        vector<int> a(n);

        for (auto &itr : a)
            cin >> itr;

        ll m1, m2, m3;

        sort(a.begin(),a.end());

        m1 = a[0] * a[1] * a[n - 1] * a[n - 2] * a[n - 3];
        m2 = a[0] * a[1] * a[2] * a[3] * a[n - 1];
        m3 = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];

        cout << max(m1, max(m2, m3)) << endl;
    }
    return 0;
}