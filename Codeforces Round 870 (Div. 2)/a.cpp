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

        int cnt = 0;

        for (auto &itr : v)
        {
            cin >> itr;
            if (itr == n)
                ++cnt;
        }

        sort(v.begin(), v.end());

        // if (cnt == n)
        //     cout << -1 << endl;
        // else if (cnt == 0)
        //     cout << 0 << endl;

        int ans = 0;
        bool ok = false;
        for (int i = 0; i < n + 1; ++i)
        {
            int one(0), two(0);
            for (int j = 0; j < n; ++j)
            {
                if (v[j] > i)
                    ++one;
                else
                    ++two;
            }
            if (one == i)
            {
                cout << i << endl;
                ok = true;
                break;
            }
        }

        if (!ok)
            cout << -1 << endl;
    }
    return 0;
}