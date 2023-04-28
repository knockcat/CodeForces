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

        int n, k;

        cin >> n >> k;

        bool ok = false;

        for (int i = 0; i < n; ++i)
        {
            int first = (i * (i - 1)) / 2;
            int last = ((n - i) * (n - i - 1)) / 2;

            if (first + last == k)
            {
                cout << "YES" << endl;

                for (int j = 0; j < i; ++j)
                    cout << 1 << ' ';
                for (int j = 0; j < n - i; ++j)
                    cout << -1 << ' ';
                cout << endl;
                ok = true;
                break;
            }
        }

        if (!ok)
            cout << "NO" << endl;
    }

    return 0;
}