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
        int n, k;
        cin >> n >> k;

        string str, t;
        cin >> str >> t;

        bool ok = true;

        map<char, int> mp1, mp2;

        for (int i = 0; i < n; i++)
        {
            ++mp1[t[i]];
            ++mp2[str[i]];
        }
        for (char k = 97; k <= 122; ++k)
        {
            if (mp1[k] == mp2[k])
            {
                continue;
            }
            ok = false;
            break;
        }

        for (int i = 0; i < n and i < k; ++i)
        {
            if (n - 1 - i < k)
            {
                if (str[i] == t[i])
                    continue;
                else
                {
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
