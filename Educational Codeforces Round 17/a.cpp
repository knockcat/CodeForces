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
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if ((n / i) != i)
                v.push_back(n / i);
        }
    }

    sort(v.begin(), v.end());
    if (v.size() < k)
        cout << -1 << endl;
    else
        cout << v[k - 1] << endl;

    return 0;
}
