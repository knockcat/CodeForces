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

        int n;
        cin >> n;

        int a = n % 6;
        int b = n / 6;

        if (n <= 6)
            cout << 15 << endl;
        else if (a == 0)
            cout << b * 15 << endl;
        else if (a <= 2)
        {
            cout << (b - 1) * 15 + 20 << endl;
        }
        else if (a <= 4)
        {
            cout << (b - 1) * 15 + 25 << endl;
        }
        else
        {
            cout << (b + 1) * 15 << endl;
        }
    }
    return 0;
}
