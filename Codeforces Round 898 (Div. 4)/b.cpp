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

        int n;
        cin >> n;

        vector<int> v(n);

        int maxi = 0, mini = 9;

        int maxIdx = -1, minIdx = -1;

        int cnt = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] > maxi)
            {
                maxIdx = i;
                maxi = max(maxi, v[i]);
            }
            if (v[i] < mini)
            {
                mini = min(mini, v[i]);
                minIdx = i;
            }

            if (v[i] == 0)
                ++cnt;
        }

        long long first = 1, second = 1;
        for (int i = 0; i < n; ++i)
        {
            if (i == maxIdx)
            {
                first = first * 1LL * (v[i] + 1);
            }
            else
            {
                first = first * 1LL * v[i];
            }

            if (i == minIdx)
            {
                second = second * 1LL * (v[i] + 1);
            }
            else
            {
                second = second * 1LL * (v[i]);
            }
        }

        if (cnt > 1)
            cout << 0 << endl;
        else
            cout << max(first, second) << endl;
    }
    return 0;
}