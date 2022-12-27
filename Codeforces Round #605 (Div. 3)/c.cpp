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

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n, k;
    cin >> n >> k;

    string str;
    cin >> str;
    char ch;

    unordered_map<char, int> mp;
    while (k--)
    {
        cin >> ch;
        ++mp[ch];
    }

    string ans;

    for (int i = 0; i < n; ++i)
    {
        if (mp.find(str[i]) != mp.end())
        {
            ans += str[i];
        }
        else
            ans += '$';
    }

    // cout << ans << endl;
    int res = 0, count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (ans[i] == '$')
        {
            // cout << count << endl;
            res += ((count * (count + 1)) / 2);
            count = 0;
        }
        else
            ++count;
    }
    res += ((count * (count + 1)) / 2);
    cout << res << endl;
    return 0;
}
