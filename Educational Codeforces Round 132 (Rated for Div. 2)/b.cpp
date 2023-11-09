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

    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    for (auto &itr : v)
        cin >> itr;

    vector<int> pref, suff;

    pref.push_back(0);

    suff.push_back(0);

    int curr = 0;
    for (int i = 1; i < n; ++i)
    {
        if (v[i] < v[i - 1])
        {
            curr += (v[i - 1] - v[i]);
        }
        pref.push_back(curr);
    }

    curr = 0;

    for (int i = n - 2; i >= 0; --i)
    {
        if (v[i] < v[i + 1])
        {
            curr += (v[i + 1] - v[i]);
        }
        suff.push_back(curr);
    }
    vector<int> ans;

    // for (auto &itr : pref)
    //     cout << itr << ' ';
    // cout << endl;

    // for (auto &itr : suff)
    //     cout << itr << ' ';
    // cout << endl;

    reverse(suff.begin(), suff.end());

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        --x, --y;

        int fall = 0;

        if (x < y)
            fall = pref[y] - (x >= 0 ? pref[x] : 0);
        else
            fall = suff[y] - (x < n ? suff[x] : 0);

        ans.push_back(fall);
    }

    for (auto &itr : ans)
        cout << itr << endl;
    cout << endl;

    return 0;
}