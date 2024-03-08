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

        int n, l;
        cin >> n >> l;

        vector<pair<int, int>> vp;

        int a, b;
        for (int i = 0; i < n; ++i)
        {
            cin >> a >> b;
            vp.push_back({a, b});
        }

        sort(vp.begin(), vp.end(), [&](const auto &a, const auto &b)
             { return a.second < b.second; });

        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            priority_queue<int> pq;
            int sum = 0;

            for (int j = i; j < n; ++j)
            {
                sum += vp[j].first;
                pq.push(vp[j].first);

                int boundaryTime = vp[j].second - vp[i].second;

                while (!pq.empty() and sum + boundaryTime > l)
                {
                    sum -= pq.top();
                    pq.pop();
                }
                ans = max(ans, (int)pq.size());
            }
        }

        cout << ans << endl;
    }
    return 0;
}