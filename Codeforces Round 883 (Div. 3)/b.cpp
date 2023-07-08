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

        char v[3][3];

        string ans = "DRAW";

        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
                cin >> v[i][j];
        }

        if (v[0][0] == v[1][1] and v[2][2] == v[0][0] and v[0][0] != '.')
            ans = v[0][0];
        if (v[0][2] == v[1][1] and v[2][0] == v[0][2] and v[0][2] != '.')
            ans = v[0][2];

        for (int i = 0; i < 3; ++i)
        {
            if (v[i][0] == v[i][1] and v[i][2] == v[i][0] and v[i][0] != '.')
                ans = v[i][0];
            if (v[0][i] == v[1][i] and v[2][i] == v[0][i] and v[0][i] != '.')
                ans = v[0][i];
        }

        cout << ans << endl;
    }
    return 0;
}