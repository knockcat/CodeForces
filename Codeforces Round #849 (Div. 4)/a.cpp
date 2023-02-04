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
        char ch;
        cin >> ch;
        map<char, int> mp;
        string str = "codeforces";
        for (auto itr : str)
            ++mp[itr];

        if (mp.find(ch) != mp.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}