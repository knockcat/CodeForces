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

        bool ok = true;

        int n;
        cin >> n;

        vector<int> v(n);
        for (auto &ele : v)
            cin >> ele;

        int maxTillNow = INT_MIN;

        int num = v[0];
        int ones = num % 10;
        int tens = num / 10;
        if (tens != 0 and tens <= ones)
            maxTillNow = ones;
        else
        {
            maxTillNow = v[0];
        }

        for (int i = 1; i < n; ++i)
        {
            num = v[i];
            ones = num % 10;
            tens = num / 10;

            if (tens != 0)
            {
                if (tens < maxTillNow and num < maxTillNow)
                {
                    ok = false;
                    break;
                }
                else if (tens >= maxTillNow)
                {
                    if (ones >= tens)
                        maxTillNow = ones;
                    else if (num > maxTillNow)
                    {
                        maxTillNow = num;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
                else if (num > maxTillNow)
                {
                    maxTillNow = num;
                }
            }
            else
            {
                if (num < maxTillNow)
                {
                    ok = false;
                    break;
                }
                else
                    maxTillNow = num;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}