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
    // ll tt;
    // cin >> tt;
    // while (tt--)
    // {
    // }

    int n;
    cin >> n;
    int a, b;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        vp.push_back({a, b});
    }
    bool ok = false;
    sort(vp.begin(), vp.end());

    for (int i = 1; i < n; ++i)
    {
        if (vp[i - 1].first < vp[i].first and vp[i - 1].second > vp[i].second)
            ok = true;
    }

    cout << (ok ? "Happy Alex" : "Poor Alex") << endl;
}
