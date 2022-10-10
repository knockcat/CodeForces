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

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        vector<int> b(n + 1);
        b[0] = b[1] = a[0];
        bool flag = true;

        for (int i = 1; i < n; ++i)
        {
            b[i + 1] = a[i];
            int g = __gcd(a[i], b[i]);
            g = a[i] / g;
            b[i] *= g;
        }

        for (int i = 0; i < n; ++i)
        {
            if (__gcd(b[i], b[i + 1]) != a[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}