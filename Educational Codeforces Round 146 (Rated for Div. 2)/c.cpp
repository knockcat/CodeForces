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

        int n, s1, s2;
        cin >> n >> s1 >> s2;

        vector<int> v(n);

        for (auto &itr : v)
            cin >> itr;

        vector<pair<int, int>> vp;
        for (int i = 0; i < n; ++i)
            vp.push_back({v[i], i + 1});

        sort(vp.rbegin(), vp.rend());

        vector<int> a, b;

        // for (auto itr : vp)
        //     cout << v[itr.second - 1] << " ";
        // cout << endl;

        int first = 0, second = 0;
        for (int i = 0; i < n; ++i)
        {
            bool first = ((a.size() + 1) * s1 <= (b.size() + 1) * s2);
            if (first)
                a.push_back(vp[i].second);
            else
                b.push_back(vp[i].second);
        }
        cout << a.size() << " ";

        for (auto itr : a)
            cout << itr << " ";

        cout << endl;

        cout << b.size() << " ";
        for (auto itr : b)
            cout << itr << " ";

        cout << endl;
    }
    return 0;
}