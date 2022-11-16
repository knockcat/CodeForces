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
        vector<int> v(n);
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] != i + 1)
                ++count;
        }

        if (count == 0)
            cout << 0 << endl;
        else
        {
            if (v[0] == 1 or v[n - 1] == n)
                cout << 1 << endl;
            else if (v[0] == n and v[n - 1] == 1)
                cout << 3 << endl;
            else
                cout << 2 << endl;
        }
    }

    return 0;
}
