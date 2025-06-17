// JAI SHREE RAM
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
const ll eps = -1e9;
const ll maxn = 1e5 + 10;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine -> Success :D

bool check(string &str)
{
    bool ok = false;
    int n = str.size();
    map<char, int> mp;
    for (int i = 0; i < n - 1; ++i)
    {
        if (mp.find(str[i]) != mp.end())
            ok = true;
        ++mp[str[i]];
    }
    return ok;
}

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool ok = false;
        map<char, int> mp;
        if (check(str))
            ok = true;
        reverse(str.begin(), str.end());
        if (check(str))
            ok = true;
        cout << (ok ? "Yes" : "No") << endl;
    }
    return 0;
}