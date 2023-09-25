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

        int n;
        cin >> n;

        vector<int> row(n), col(n);

        int rowSum = 0, colSum = 0;

        for (auto &itr : row)
        {
            cin >> itr;
            rowSum += itr;
        }
        for (auto &itr : col)
        {
            cin >> itr;
            colSum += itr;
        }

        sort(row.begin(), row.end());
        sort(col.begin(), col.end());

        cout << min(rowSum + (col[0] * n), colSum + (row[0] * n)) << endl;
    }
    return 0;
}