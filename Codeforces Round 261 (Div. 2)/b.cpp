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

    vector<ll> v(n);

    ll maxi = LONG_MIN, mini = LONG_MAX;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        maxi = max(maxi, v[i]);
        mini = min(mini, v[i]);

        ++mp[v[i]];
    }

    ll cntMaxi = count(v.begin(), v.end(), maxi);
    ll cntMini = count(v.begin(), v.end(), mini);

    if (maxi == mini)
    {
        cntMaxi /= 2, cntMini /= 2;
    }

    ll ways = (ll)cntMaxi * cntMini;

    if (mp.size() == 1)
        ways = (n * (n - 1)) / 2;

    cout << maxi - mini << " " << ways << endl;

    return 0;
}