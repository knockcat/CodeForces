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

        for (auto &itr : v)
            cin >> itr;

        sort(v.begin(), v.end());

        int od = 0, ev = 0;

        for (auto itr : v)
        {
            if (itr & 1)
                ++od;
            else
                ++ev;
        }

        bool ok = false;
        if (v[0] & 1)
        {
            ok = true;
        }
        else
        {
            if (od >= 1)
                ok = false;
            else
                ok = true;
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}