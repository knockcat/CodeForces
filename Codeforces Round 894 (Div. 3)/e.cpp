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

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n, m, d;
        cin >> n >> m >> d;

        vector<int> v(n);

        for (auto &itr : v)
            cin >> itr;

        priority_queue<int, vector<int>, greater<int>> pq;

        int sum = 0, ans = 0;

        for (int i = 0; i < n; ++i)
        {
            if (v[i] > 0)
            {
                pq.push(v[i]);
                sum += v[i];
            }

            if (pq.size() > m)
            {
                sum -= pq.top();

                pq.pop();
            }
            ans = max(ans, sum - ((i + 1) * d));
        }

        cout << ans << endl;
    }
    return 0;
}