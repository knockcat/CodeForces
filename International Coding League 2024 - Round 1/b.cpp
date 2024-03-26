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

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int nap, m;
        cin >> nap >> m;

        vector<int> start(nap), end(nap);
        vector<int> times(m);

        for (auto &it : start)
            cin >> it;
        for (auto &it : end)
            cin >> it;
        for (auto &ele : times)
            cin >> ele;

        auto check = [&](int idx, int curTime) -> bool
        {
            if (idx - 1 >= 0)
            {
                if (curTime >= start[idx - 1] and curTime <= end[idx - 1])
                    return true;
            }
            if (idx >= 0 and idx < nap)
            {
                if (curTime >= start[idx] and curTime <= end[idx])
                    return true;
            }
            return false;
        };

        int cnt = 0;

        for (auto &curTime : times)
        {
            int idx = lower_bound(start.begin(), start.end(), curTime) - start.begin();

            if (check(idx, curTime))
            {
                ++cnt;
            }
        }

        cout << (m - cnt) << endl;
    }
    return 0;
}