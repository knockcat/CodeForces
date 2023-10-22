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
        int ans = 0;
        int prev = 1;
        for (int i = 0; i < 4; ++i)
        {
            int curr = str[i] - '0';

            if (str[i] == '0')
                curr = 10;

            if (curr == prev - 1 or curr == prev + 1)
            {
                ans += 2;
            }
            else
            {
                ans += abs(prev - curr) + 1;
            }

            prev = curr;
        }

        cout << ans << endl;
    }
    return 0;
}