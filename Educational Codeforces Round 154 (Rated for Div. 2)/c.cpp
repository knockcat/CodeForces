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

        string str;
        cin >> str;

        int curr = 0, maxSorted = 0, minNotSorted = inf;
        bool ok = true;

        for (auto &itr : str)
        {
            if (itr == '+')
                ++curr;
            else if (itr == '-')
            {
                --curr;

                if (curr < minNotSorted)
                {
                    minNotSorted = inf;
                }

                maxSorted = min(maxSorted, curr);
            }
            else if (itr == '1')
            {
                if (curr >= minNotSorted)
                {
                    ok = false;
                    break;
                }

                maxSorted = max(maxSorted, curr);
            }
            else
            {
                if (curr <= maxSorted or curr < 2)
                {
                    ok = false;
                    break;
                }

                minNotSorted = min(minNotSorted, curr);
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}