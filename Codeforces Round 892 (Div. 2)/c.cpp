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

        for (int i = 0; i < n; ++i)
            v[i] = i + 1;

        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            vector<int> temp = v;

            reverse(temp.begin() + i, temp.end());

            ll curr = 0, maxi = 0;

            for (int j = 0; j < n; ++j)
            {
                curr += (temp[j] * (j + 1));
                maxi = max(maxi, temp[j] * (j + 1));
            }

            ans = max(ans, curr - maxi);
        }

        cout << ans << endl;
    }
    return 0;
}