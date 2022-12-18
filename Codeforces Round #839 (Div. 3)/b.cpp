// K2OCKCAT

#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
// #define int long long int
#define endl "\n"

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod = 1e9 + 7;
const ll eps = 1e-9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

int a[2][2];

void rotate90Clockwise(int a[2][2])
{

    for (int i = 0; i < 2 / 2; i++)
    {
        for (int j = i; j < 2 - i - 1; j++)
        {

            int temp = a[i][j];
            a[i][j] = a[2 - 1 - j][i];
            a[2 - 1 - j][i] = a[2 - 1 - i][2 - 1 - j];
            a[2 - 1 - i][2 - 1 - j] = a[j][2 - 1 - i];
            a[j][2 - 1 - i] = temp;
        }
    }
}

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        int n;

        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                cin >> a[i][j];
            }
        }
        bool ok = false;
        for (int i = 0; i < 4; ++i)
        {
            if (a[0][0] < a[0][1] and a[0][0] < a[1][0] and a[1][0] < a[1][1] and a[0][1] < a[1][1])
            {
                ok = true;
            }
            rotate90Clockwise(a);
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
