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

    int n;
    cin >> n;
    string str;
    cin >> str;

    string ok, ans(str.size(), 0);
    vector<int> v;
    map<int, int> mp;
    set<int> s;

    for (auto itr : str)
    {
        ++mp[itr];
    }

    for (auto itr : mp)
    {
        if (itr.second % n != 0)
        {
            cout << -1 << endl;
            return 0;
        }

        int a = itr.second / n;
        while (a--)
            ok += itr.first;
    }

    for (int i = 0; i < n; ++i)
        cout << ok;

    // cout << ans << endl;
    return 0;
}
