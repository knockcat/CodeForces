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
        map<char, int> mp;
        string str;
        cin >> str;

        for (auto itr : str)
            ++mp[itr];

        int cnt = 0;

        for (int i = 0; i < n; ++i)
        {
            if (mp[str[i] - 32] > 0 and mp[str[i]] > 0)
            {
                --mp[str[i] - 32];
                ++cnt;
                --mp[str[i]];
            }
            else if (mp[str[i] + 32] > 0 and mp[str[i]] > 0)
            {
                --mp[str[i] + 32];
                ++cnt;
                --mp[str[i]];
            }
        }

        for (auto itr : mp)
        {
            if (k > 0)
            {
                if (itr.second >= 2 and k)
                {
                    int have = itr.second / 2;

                    int canTake = min(have, k);

                    cnt += canTake;
                    k -= canTake;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}