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

        vector<int> v(n);
        int cnt = 0;
        int maxi = -1;

        for (auto &itr : v)
        {
            cin >> itr;
            maxi = max(maxi, itr);
            if (itr == 0)
                ++cnt;
        }

        if (cnt <= (n + 1) / 2)
        {
            cout << 0 << endl;
        }
        else if (maxi >= 2 or cnt == n)
            cout << 1 << endl;
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}