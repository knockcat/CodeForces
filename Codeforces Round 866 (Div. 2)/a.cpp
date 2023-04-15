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
        string s;
        cin >> s;

        int n = s.length();
        if (n == 1 and s[0] == '^')
        {
            cout << 1 << endl;
            continue;
        }

        int ans = 0;
        if (s[0] == '_')
            ans++;

        if (s[n - 1] == '_')
            ans++;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == '_' and s[i - 1] == '_')
                ans++;
        }

        cout << ans << endl;
    }
    return 0;
}