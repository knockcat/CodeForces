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
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));

        int neg = 0, sum = 0, Min = 200;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] < 0)
                {
                    neg++;
                }
                sum += abs(a[i][j]);
                Min = min(Min, abs(a[i][j]));
            }
        }
        if (neg & 1)
        {
            cout << sum - (2 * Min) << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
    return 0;
}