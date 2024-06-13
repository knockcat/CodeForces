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

        vector<int> v;

        for (int i = 0; i < n; ++i)
        {
            if (str[i] == '*')
            {
                v.push_back(i);
            }
        }

        int sz = v.size(), med;

        if (sz == 0)
        {
            cout << 0 << endl;
            continue;
        }

        if (sz & 1)
        {
            med = v[sz / 2];
        }
        else
        {
            med = (v[sz / 2] + v[(sz / 2) - 1]) / 2;
        }

        int canTake = med - 1, ans = 0;

        if (str[med] == '*')
            str[med] = '.';
        else
        {
            canTake = med;
        }

        for (int i = med - 1; i >= 0; --i)
        {
            if (str[i] == '*')
            {
                if (i == canTake)
                {
                    --canTake;
                }
                else
                {
                    ans += (canTake - i);
                    --canTake;
                }
            }
        }

        canTake = med + 1;

        for (int i = med + 1; i < n; ++i)
        {
            if (str[i] == '*')
            {
                if (i == canTake)
                {
                    ++canTake;
                }
                else
                {
                    ans += (i - canTake);
                    ++canTake;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}