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

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n, m;
        cin >> n >> m;

        function<int(int, int)> helper = [&](int n, int m)
        {
            if (n == m)
                return true;

            else if (n % 3 != 0)
                return false;
            else
            {
                return helper(n / 3, m) or helper(2 * (n / 3), m);
            }
        };

        cout << (helper(n, m) ? "YES" : "NO") << endl;
    }
    return 0;
}