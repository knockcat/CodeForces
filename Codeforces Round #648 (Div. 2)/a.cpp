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

        int n, m;
        cin >> n >> m;

        vector<vector<int>> mat(n, vector<int>(m));
        vector<int> row(n, 0), col(m, 0);
        int cnt = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> mat[i][j];
                if (mat[i][j] == 1)
                    row[i] = 1, col[j] = 1;
            }
        }

        int rowCnt = count(row.begin(), row.end(), 1);
        int colCnt = count(col.begin(), col.end(), 1);

        cnt = min(n - rowCnt, m - colCnt);
        if (cnt & 1)
            cout << "Ashish" << endl;
        else
            cout << "Vivek" << endl;
    }
    return 0;
}