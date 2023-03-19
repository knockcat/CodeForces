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
        int n;
        cin >> n;

        long long mihai = 0, bianca = 0;
        for (int i = 0; i < n; ++i)
        {
            int k;
            cin >> k;
            if (k & 1)
                bianca += k;
            else
                mihai += k;
        }

        if (mihai > bianca)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}