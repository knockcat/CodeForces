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

        vector<vector<char>> v(10, vector<char>(10, '.'));

        int points = 0;

        int n = 10;

        for (int i = 0; i < 10; ++i)
        {
            for (int j = 0; j < 10; ++j)
            {
                cin >> v[i][j];
                if (v[i][j] == 'X')
                {

                    if (i == 0 or j == 0 or i == n - 1 or j == n - 1)
                        ++points;
                    else if ((i > 0 and i < n - 2 and j == 1 or j == 8) or (i == 1 or i == 8 and j > 0 and j < n - 2))
                        points += 2;
                    else if ((i > 1 and i < n - 3 and j == 2 or j == 7) or (i == 2 or i == 7 and j > 1 and j < n - 3))
                        points += 3;
                    else if ((i > 2 and i < n - 4 and j == 3 or j == 6) or (i == 3 or i == 6 and j > 2 and j < n - 4))
                        points += 4;
                    else
                        points += 5;
                }
            }
        }

        cout << points << endl;
    }
    return 0;
}