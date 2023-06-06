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

        string str;
        cin >> str;

        char prev = str[0];
        string ans;

        ans += prev;

        for (int i = 1; i < n; ++i)
        {
            if (str[i] == prev)
            {
                if (i + 1 < n)
                {
                    prev = str[i + 1];
                    ans += prev;
                    ++i;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}