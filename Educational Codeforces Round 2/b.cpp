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

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (auto &itr : a)
        cin >> itr;

    for (auto &itr : b)
        cin >> itr;

    sort(a.begin(), a.end());

    vector<int> ans;

    for (int i = 0; i < m; ++i)
    {
        int idx = upper_bound(a.begin(), a.end(), b[i]) - a.begin();

        ans.push_back(idx);
    }

    for (auto itr : ans)
        cout << itr << " ";

    cout << endl;

    return 0;
}