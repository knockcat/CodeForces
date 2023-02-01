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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        int sum = 0, res = INT_MIN;

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            sum += v[i];
        }

        for (int i = 0; i < n - 1; ++i)
        {
            int here = sum;
            here -= v[i];
            here -= v[i + 1];

            if (v[i] == 1)
                here -= 1;
            else
                here += 1;
            if (v[i + 1] == 1)
                here -= 1;
            else
                here += 1;

            res = max(res, here);
        }

        cout << res << endl;
    }

    return 0;
}