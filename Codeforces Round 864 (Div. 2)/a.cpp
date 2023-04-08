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

vector<int> dx = {-1, 0, 0, +1};
vector<int> dy = {0, -1, +1, 0};

int check(int x, int y, int n, int m)
{
    int need = 0;
    for (int i = 0; i < 4; ++i)
    {

        int newx = dx[i] + x;
        int newy = dy[i] + y;

        // cout << newx << " " << newy << endl;
        if (newx >= 0 and newy >= 0 and newx < n and newy < m)
        {
            ++need;
        }
    }
    return need;
}

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

        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        --x1, --y1, --x2, --y2;

        int a = check(x1, y1, n, m);
        // cout << endl;
        int b = check(x2, y2, n, m);

        cout << min(a, b) << endl;
    }
    return 0;
}
