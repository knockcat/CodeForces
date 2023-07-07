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

        string one, two, three;
        cin >> one >> two >> three;

        char ch = '.';

        for (int i = 0; i < 3; i++)
        {

            if (one[i] == two[i] && one[i] == three[i])
            {
                ch = one[i];
            }
        }
        if (one[0] == one[1] && one[0] == one[2])
            ch = one[0];

        if (three[0] == three[1] && three[0] == three[2])
            ch = three[0];

        if (two[0] == two[1] && two[0] == two[2])
            ch = two[0];

        if (three[0] == two[1] && three[0] == one[2])
            ch = three[0];

        if (one[0] == two[1] && one[0] == three[2])
            ch = one[0];

        if (ch == '.')
            cout << "DRAW" << endl;
        else
            cout << ch << endl;
    }
    return 0;
}