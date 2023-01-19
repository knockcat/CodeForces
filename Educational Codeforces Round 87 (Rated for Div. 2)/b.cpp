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
        string s;
        cin >> s;

        int cnt[4] = {}; // 1,2,3

        int l = 0;
        int n = s.length();
        int ans = n + 1;

        for (int r = 0; r < n; ++r)
        {
            int dig = s[r] - '0';

            cnt[dig]++;

            while (cnt[s[l] - '0'] > 1)
                cnt[s[l] - '0']--, l++;

            if (cnt[1] && cnt[2] && cnt[3])
                ans = min(ans, r - l + 1);
        }

        if (ans == n + 1)
            ans = 0;

        cout << ans << '\n';
    }

    return 0;
}
