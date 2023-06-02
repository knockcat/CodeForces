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

        int nn = n;

        int one = 1;
        int two = 0;

        int track = 1;

        bool ok = true;

        --nn;

        while (nn > 0)
        {
            if (ok)
            {
                track++;
                if (one + two + track <= n)
                {
                    two += track;
                    nn -= track;
                }
                else if (nn > 0)
                {
                    two += nn;
                    break;
                }
                else
                    break;
                track++;
                if (one + two + track <= n)
                {
                    two += track;
                    nn -= track;
                }
                else if (nn > 0)
                {
                    two += nn;
                    break;
                }
                else
                    break;
            }
            else
            {
                track++;
                if (two + one + track <= n)
                {
                    one += track;
                    nn -= track;
                }
                else if (nn > 0)
                {
                    one += nn;
                    break;
                }
                else
                    break;
                track++;
                if (two + one + track <= n)
                {
                    one += track;
                    nn -= track;
                }
                else if (nn > 0)
                {
                    one += nn;
                    break;
                }
                else
                    break;
            }

            ok ^= 1;
        }

        cout << one << ' ' << two << endl;
    }
    return 0;
}