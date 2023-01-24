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
long long cnt[2][2];
int32_t main()
{
    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        // Knockcat
        int n;
        cin >> n;

        int cnt = 0;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] == 1)
                ++cnt;
        }

        int rem = n - cnt;
        int ans = 0;

        if (cnt & 1 and rem & 1)
        {
            ans += cnt / 2;
            ans += rem + 1;
        }
        else if (cnt % 2 == 0 and rem % 2 == 0)
        {
            ans += cnt / 2;
            ans += rem;
        }
        else if (cnt & 1 and rem % 2 == 0)
        {
            ans += cnt / 2;
            ans += rem + 1;
        }
        else if (cnt % 2 == 0 and rem & 1)
        {
            ans += cnt / 2;
            ans += rem;
        }

        cout << ans << endl;
    }

    return 0;
}