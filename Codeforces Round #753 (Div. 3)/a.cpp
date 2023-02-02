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
        string words;
        cin >> words;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < words.size(); ++i)
        {
            mp.insert({words[i], i + 1});
        }

        int ans = 0;

        for (int i = 1; i < s.size(); ++i)
        {
            ans += abs(mp[s[i]] - mp[s[i - 1]]);
        }

        cout << ans << endl;
    }

    return 0;
}