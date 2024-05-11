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

        string str;
        cin >> str;

        int n = str.size();

        int cnt = 1, have1 = 0, have2 = 0;

        for (int i = 1; i < n; ++i)
        {
            if (str[i - 1] != str[i])
                ++cnt;
            if (str[i - 1] == '0' and str[i] == '1')
                ++have1;
            if (str[i - 1] == '1' and str[i] == '0')
                ++have2;
        }

        if (cnt == 2 or cnt == 1)
        {
            if (cnt == 1)
                cout << 1 << endl;
            else
            {
                if (have2)
                {
                    cout << 2 << endl;
                }
                else
                    cout << 1 << endl;
            }
        }
        else
        {
            if (have1)
                --cnt;
            cout << cnt << endl;
        }
    }
    return 0;
}