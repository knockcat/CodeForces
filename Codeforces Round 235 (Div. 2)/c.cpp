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

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n, m;
    cin >> n >> m;

    int minHave = ((m + 1) / 2) - 1;
    int maxHave = (m + 1);

    if (n >= minHave and n <= maxHave)
    {
        string ans;
        int zero = n, one = m;
        if (n > minHave)
        {
            ans += "0";
            --zero;
            while (one > 0 or zero > 0)
            {
                if ((one + 1) / 2 > zero)
                {
                    if (one > 1)
                        ans += "11";
                    else
                        ans += "1";
                    one -= 2;
                }
                else
                {
                    ans += "1";
                    --one;
                }
                if (zero)
                {
                    ans += "0";
                    --zero;
                }
            }
        }
        else
        {
            ans += "11";
            one -= 2;
            while (one > 0 or zero > 0)
            {
                if (zero)
                {
                    ans += "0";
                    --zero;
                }
                if ((one + 1) / 2 > zero)
                {
                    if (one > 1)
                        ans += "11";
                    else
                        ans += "1";
                    one -= 2;
                }
                else
                {
                    ans += "1";
                    --one;
                }
            }
        }

        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}