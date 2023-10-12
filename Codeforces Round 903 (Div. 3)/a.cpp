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

        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int ans = -1, op = 0;
        while (true)
        {
            if (x.find(s) != string::npos)
            {
                // cout << "true" << endl;
                ans = op;
                break;
            }

            if (x.size() > 75)
                break;
            ++op;
            x += x;
        }

        cout << ans << endl;
    }
    return 0;
}