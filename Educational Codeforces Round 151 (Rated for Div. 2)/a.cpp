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

        int n, k, x;
        cin >> n >> k >> x;

        bool ok = false;

        if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl;

            for (int i = 0; i < n; ++i)
                cout << 1 << ' ';
            cout << endl;
        }
        else if (n == 1 or k <= 1)
        {
            cout << "NO" << endl;
        }
        else if (n % 2 == 0)
        {
            cout << "YES" << endl;

            cout << n / 2 << endl;

            for (int i = 0; i < n / 2; ++i)
                cout << 2 << ' ';
            cout << endl;
        }
        else if (k > 2)
        {
            cout << "YES" << endl;

            int canTake = ((n - 3) / 2) + 1;

            cout << canTake << endl;

            for (int i = 0; i < (n - 3) / 2; ++i)
                cout << 2 << ' ';
            cout << 3 << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}