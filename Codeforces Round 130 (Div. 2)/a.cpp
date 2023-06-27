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

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    string str, ans = "";

    cin >> str;

    int n = str.size();

    bool ok = false;

    for (int i = 0; i < n; ++i)
    {
        if (i + 2 < n and str[i] == 'W' and str[i + 1] == 'U' and str[i + 2] == 'B')
        {
            i += 2;
            ok = false;
        }
        else
        {
            if (!ok)
                ans += " ";
            ans += str[i];
            ok = true;
        }
    }

    cout << ans << endl;
    return 0;
}