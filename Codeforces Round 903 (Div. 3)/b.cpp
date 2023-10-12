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

        int a, b, c;
        cin >> a >> b >> c;

        if (a == b and b == c)
        {
            cout << "YES" << endl;
        }
        else
        {
            int hcf = __gcd(a, b);
            hcf = __gcd(hcf, c);

            int cnt = 0;

            cnt += (a / (hcf));
            cnt += (b / hcf);
            cnt += (c / hcf);

            cnt -= 3;

            if (cnt <= 3)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}