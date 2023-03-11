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
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        int cnt1 = 0, cnt2 = 0;
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] == 2)
            {
                cnt1 += cnt2; // total
                cnt2 = 0;
                if (cnt1 > 0)
                    ans = max(ans, (cnt1 + 2) / 2);
            }
            else
            {
                ++cnt2;
                if (cnt1 == 0)
                    ans = max(ans, cnt2);
                else
                    ans = max(ans, (cnt1 + 2) / 2 + cnt2);
            }
        }

        cout << ans << endl;
    }
    return 0;
}