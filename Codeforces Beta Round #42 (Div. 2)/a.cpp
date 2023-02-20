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

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }
    int n;
    cin >> n;

    map<string, int> mp;
    string str;

    for (int i = 0; i < n; ++i)
    {
        cin >> str;
        ++mp[str];
    }
    int ans = 0;
    for (auto itr : mp)
    {
        if (itr.second > ans)
        {
            ans = itr.second;
            str = itr.first;
        }
    }

    cout << str << endl;
    return 0;
}