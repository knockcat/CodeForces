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

    string a, b;
    cin >> a >> b;
    int t(0), d(0), w(0);

    for (int i = 0; i < a.length(); i++)
    {
        d += b[i] == '?';
        t += (a[i] == '+') ? 1 : -1;
        if (b[i] == '+')
            t -= 1;
        else if (b[i] == '-')
            t += 1;
    }

    for (int i = 0; i < (1 << d); i++)
    {
        int c = t, k = i;
        for (int j = 1; j <= d; j++)
        {
            c += (k & 1) ? 1 : -1;
            k /= 2;
        }
        w += (c == 0) ? 1 : 0;
    }

    d = 1 << d;
    cout.precision(20);
    cout << fixed << w / double(d) << endl;

    return 0;
}