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

        string a, b;
        cin >> a >> b;

        if (a == b)
            cout << "YES" << endl;
        else if (a.size() != b.size())
            cout << "NO" << endl;
        else
        {
            int n = a.size();
            bool ok = false;
            for (int i = 0; i < n - 1; ++i)
            {
                if (a[i] == '0' and b[i] == '0' and a[i + 1] == '1' and b[i + 1] == '1')
                {
                    ok = true;
                    break;
                }
            }
            cout << (ok ? "YES" : "NO") << endl;
        }
    }
    return 0;
}