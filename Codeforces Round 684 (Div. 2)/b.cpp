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

// You better take more time but avoid penalties
// Look at Constraints

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n, k;
        cin >> n >> k;

        int part = n / k;
        int extp = n % k;

        vector<int> v(n * k);

        for (auto &itr : v)
            cin >> itr;

        sort(v.begin(), v.end());

        // for (auto &itr : v)
        //     cout << itr << ' ';
        // cout << endl;

        vector<vector<int>> vec;

        int ans = 0;

        int start = 0, end = n * k;

        int f = 0, s = 0;
        if (k & 1)
        {
            f = n / 2;
            s = (n / 2) + 1;
        }
        else
        {
            f = (n / 2) - 1;
            s = (n / 2) + 1;
        }

        for (int i = 0; i < k; ++i)
        {
            vector<int> curr;
            for (int j = start; j < start + f; ++j)
                curr.push_back(v[j]);
            for (int j = end - s; j < end; ++j)
                curr.push_back(v[j]);
            start += f;
            end -= s;
            if (curr.size() & 1)
                ans += curr[curr.size() >> 1];
            else
                ans += curr[(curr.size() >> 1) - 1];
            // for (auto &itr : curr)
            //     cout << itr << ' ';
            // cout << endl;
        }
        cout << ans << endl;
    }
    return 0;
}