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
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> mp;
        bool ok = 0;
        bool one = true;
        for (int i = 0; i < n; ++i)
        {
            if (mp.find(s[i]) == mp.end())
            {
                mp.insert({s[i], ok});
                s[i] = ok + '0';
            }
            else
            {
                if (mp[s[i]] != ok)
                    one = false;
            }
            ok ^= 1;
        }
        // cout << s << endl;
        if (one)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}