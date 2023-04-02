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

        int ch = str[0];
        int idx = -1;

        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            if (str[i] == ch)
            {
                ++cnt;
            }
            else
            {
                break;
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if (str[i] == ch and cnt)
            {
                --cnt;
                continue;
            }
            else if (str[i] == ch or str[i] <= ch)
            {
                ch = str[i];
                idx = i;
            }
        }
        string ans;
        if (idx != -1)
            ans += str[idx];

        for (int i = 0; i < n; ++i)
        {
            if (idx != i)
                ans += str[i];
        }

        cout << ans << endl;
    }
    return 0;
}