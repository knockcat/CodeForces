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

        int m, k, f, s;
        cin >> m >> k >> f >> s;

        if (f >= m or (s >= m / k and f >= m % k))
            cout << 0 << endl;
        else
        {

            int needofTypeS = m / k;
            int needofTypeF = m % k;

            needofTypeS -= min(needofTypeS, s);

            int canTakeFromF = min(needofTypeF, f);

            f -= canTakeFromF;

            needofTypeF -= canTakeFromF;

            int canFormfromTypeF = f / k;

            needofTypeS -= min(needofTypeS, canFormfromTypeF);

            cout << needofTypeS + needofTypeF << endl;
        }
    }
    return 0;
}