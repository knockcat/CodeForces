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
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n - 3 << " " << 2 << " " << 1 << endl;
        }
        else
        {
            --n;
            if (n/2 % 2 == 0)
                cout << n / 2 + 1 << " " << n / 2 - 1 << " " << 1 << endl;
            else
                cout << n / 2 + 2 << " " << n / 2 - 2 << " " << 1 << endl;
        }
    }

    return 0;
}
