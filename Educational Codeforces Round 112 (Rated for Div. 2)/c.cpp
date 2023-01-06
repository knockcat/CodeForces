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

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        int m;
        cin >> m;
        vector<vector<int>> v(2, vector<int>(m));

        vector<int> up(m, 0), down(m, 0);
        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> v[i][j];
                if (i == 0)
                {
                    if (j == 0)
                        up[j] = v[i][j];
                    else
                        up[j] = up[j - 1] + v[i][j];
                }
                else
                {
                    if (j == 0)
                        down[j] = v[i][j];
                    else
                        down[j] = down[j - 1] + v[i][j];
                }
            }
        }

        if (m == 1)
            cout << 0 << endl;
        else
        {

            // for (auto itr : up)
            //     cout << itr << " ";
            // cout << endl;

            // for (auto itr : down)
            //     cout << itr << " ";
            // cout << endl;

            int amax = INT_MIN;
            int bobmax = INT_MAX;
            for (int i = 0; i < m; ++i)
            {
                int bob = 0;
                int alice = up[i] + down[m - 1];
                if (i != 0)
                    alice -= down[i - 1];

                bob = max(up[m - 1] - up[i], (i == 0) ? 0 : down[i - 1]);
                bobmax = min(bob, bobmax);

                // cout << "for " << i << " " << alice << " " << bob << endl;
            }

            cout << bobmax << endl;
        }
    }

    return 0;
}
