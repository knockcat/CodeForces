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

    int n, m;
    cin >> n >> m;

    int a = n / m;
    int b = n % m;

    int ans = a * (a - 1) / 2;
    int ans1 = (a + 1) * (a) / 2;

    ans *= (m - b);
    ans1 *= b;

    int maxi = n - m + 1;
    int ans2 = (maxi * (maxi - 1)) / 2;

    cout << ans + ans1 << " " << ans2 << endl;
    return 0;
}