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

bool isSquare(int x)
{
    int y = sqrt(x);
    return y * y == x;
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
        cin >> n;

        if (n % 2 == 0 and isSquare(n / 2))
            cout << "YES" << endl;
        else if (n % 4 == 0 and isSquare(n / 4))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}