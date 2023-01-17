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
        int n, x;
        cin >> n >> x;
        bool flag = false;

        vector<int> v(n);
        int evenCount = 0;
        int oddCount = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] & 1)
                ++oddCount;
        }
        evenCount = n - oddCount;

        int here = min(evenCount, x - 1);
        int ok = x - here;

        if (ok % 2 == 0)
            ++ok;
        if (oddCount >= ok and ok <= x)
            flag = 1;
        cout << ((flag) ? "Yes" : "No") << endl;
    }
    return 0;
}
