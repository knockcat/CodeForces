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

// You better take more time but avoid penalties
// Look at Constraints

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n, k;
        string str;
        cin >> n >> k >> str;

        int match = 0;

        bool ok = false;

        int st = 0, end = n - 1;

        while (st < end)
        {
            if (str[st] == str[end])
            {
                ++match;
            }
            else
                break;

            if (end - st - 1 >= 1 and match == k)
            {
                ok = true;
                break;
            }

            ++st, --end;
        }
        // cout << match << endl;
        if (k == 0 or ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}