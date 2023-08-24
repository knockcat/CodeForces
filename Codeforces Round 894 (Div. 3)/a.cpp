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

        int n, m;

        cin >> n >> m;

        string str;

        vector<vector<char>> v(n, vector<char>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
                cin >> v[i][j];
        }

        string have = "vika";

        int k = 0;

        for (int i = 0; i < m; ++i)
        {

            for (int j = 0; j < n; ++j)
            {
                char ch = v[j][i];
                if (ch == have[k])
                {
                    ++k;
                    break;
                }
            }
            if (k == 4)
                break;
        }

        if (k == 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}