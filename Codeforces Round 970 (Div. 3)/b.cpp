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
const ll maxn = 1e5 + 10;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine -> Success :D

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;
        string str;
        cin >> str;

        int z = 0, one = 0;
        for (auto &ch : str)
        {
            if (ch == '0')
                ++z;
            else
                ++one;
        }

        bool ok = false;

        if (!z)
        {
            int sq = sqrt(one);

            if (sq * sq == one)
            {
                if (one == 4)
                    ok = true;
            }
        }

        for (int i = 1; i * i <= z; ++i)
        {
            if (z % i == 0)
            {
                int leftc = z / i;
                int righc = z / i;
                int upr = i + 2;
                int downr = i + 2;
                int tot = upr + downr + leftc + righc;

                if (tot == one)
                {
                    // cout << i << ' ' << tot << endl;
                    int sq = tot + z;
                    int root = sqrt(sq);
                    if (root * root == sq)
                        ok = true;
                }
            }
        }

        cout << (ok ? "Yes" : "No") << endl;
    }
    return 0;
}