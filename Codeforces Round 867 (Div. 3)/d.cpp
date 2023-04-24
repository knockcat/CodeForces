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

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

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

        vector<int> v;
        for (int i = 0; i < n / 2; ++i)
        {
            v.push_back(i);
            v.push_back(n - i - 1);
        }

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        vector<int> ans;

        for (int i = 0; i < n - 1; ++i)
        {
            ll used = (v[i + 1] - v[i] + n) % n;

            ans.push_back(used);
        }

        if (n & 1)
        {
            cout << -1 << endl;
            continue;
        }

        cout << n << " ";

        for (auto itr : ans)
            cout << itr << " ";
        cout << endl;
    }
    return 0;
}