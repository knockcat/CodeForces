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
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; ++i)
            cin >> v[i];

        vector<pair<int, int>> ev, od;

        for (int i = 0; i < n; ++i)
        {
            if (v[i] & 1)
                od.push_back({v[i], i + 1});
            else
                ev.push_back({v[i], i + 1});
        }

        if (od.size() >= 3 or (ev.size() >= 2 and od.size() >= 1))
        {
            cout << "YES" << endl;
            if (od.size() == 3)
            {
                for (int i = 0; i < 3; ++i)
                    cout << od[i].second << " ";
                cout << endl;
            }
            else if (ev.size() >= 2 and od.size() >= 1)
            {
                for (int i = 0; i < 2; ++i)
                    cout << ev[i].second << " ";
                cout << od[0].second << endl;
            }
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}