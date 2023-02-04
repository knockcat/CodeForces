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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        map<char, int> mp, here;
        string str;
        cin >> str;

        int res = INT_MIN;

        for (auto itr : str)
            ++mp[itr];
        for (int i = 0; i < n; ++i)
        {
            ++here[str[i]];
            --mp[str[i]];
            if (mp[str[i]] == 0)
                mp.erase(str[i]);

            int var = here.size() + mp.size();
            res = max(res, var);
        }

        cout << res << endl;
    }

    return 0;
}