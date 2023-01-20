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

        unordered_map<char, int> mp;

        int i = 0, j = 0;
        int n = s.length();
        int ans = INT_MAX;

        while (j < n)
        {
            ++mp[s[j]];

            while (mp[s[i]] > 1)
            {
                --mp[s[i]];
                if (mp[s[i]] == 0)
                    mp.erase(s[i]);
                ++i;
            }
            if (mp['1'] and mp['2'] and mp['3'])
                ans = min(ans, j - i + 1);
            ++j;
        }

        cout << (ans == INT_MAX ? 0 : ans) << endl;
    }

    return 0;
}
