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
        // Knockcat

        int a, x, b, y;
        cin >> a >> x >> b >> y;

        // cout << a << " " << b << endl;

        if (a == b)
        {
            if (x == y)
                cout << "=" << endl;
            else if (x > y)
                cout << ">" << endl;
            else
                cout << "<" << endl;
        }
        else
        {
            while (a <= 100000)
            {
                if (x == 0)
                    break;
                a *= 10;
                --x;
            }
            while (b <= 100000)
            {
                if (y == 0)
                    break;
                b *= 10;
                --y;
            }

            if (x > y)
                cout << ">" << endl;
            else if (y > x)
                cout << "<" << endl;
            else
            {
                if (a == b)
                    cout << "=" << endl;
                else if (a > b)
                    cout << ">" << endl;
                else
                    cout << "<" << endl;
            }
        }
    }

    return 0;
}
