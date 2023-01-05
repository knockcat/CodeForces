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

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        int n, x;
        cin >> n >> x;
        int ans = INT_MIN;

        vector<int> v(n);
        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] % x == 0)
                ++count;
            sum += v[i];
        }

        if (count == n)
        {
            cout << -1 << endl;
            continue;
        }

        if (sum % x != 0)
        {
            cout << n << endl;
            continue;
        }

        int total = sum;
        for (int i = 0; i < n; ++i)
        {
            total -= v[i];
            if (total % x != 0)
            {
                ans = max(ans, n - i - 1);
                break;
            }
        }
        total = sum;
        for (int i = n - 1; i >= 0; --i)
        {
            total -= v[i];
            if (total % x != 0)
            {
                ans = max(ans, i);
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
