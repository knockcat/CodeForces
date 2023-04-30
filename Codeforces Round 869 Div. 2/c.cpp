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

    int n, q;

    cin >> n >> q;

    vector<int> v(n);

    for (auto &itr : v)
        cin >> itr;

    vector<int> pref(n);

    for (int i = 1; i < n - 1; ++i)
    {
        if (v[i - 1] >= v[i] and v[i] >= v[i + 1])
            pref[i] = 1;
        pref[i] += pref[i - 1];
    }

    // for (auto itr : pref)
    //     cout << itr << ' ';
    // cout << endl;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        if (r - l + 1 <= 2)
            cout << r - l + 1 << endl;
        else
        {
            --l, --r;
            int ans = pref[r - 1] - pref[l];
            ans = (r - l + 1) - ans;

            cout << ans << endl;
        }
    }

    return 0;
}