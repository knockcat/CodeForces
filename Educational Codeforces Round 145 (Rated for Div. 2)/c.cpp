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
        ll n, k;
        cin >> n >> k;

        vector<int> v(n);

        int here = k;
        for (int i = 0; i < n; ++i)
        {
            if (k >= n - i)
            {
                v[i] = 1000;
                k -= (n - i);
            }
            else
            {
                v[i] = k;
                for (int j = i + 1; j < i + k; ++j)
                    v[j] = -1;
                for (int j = i + k; j < n; ++j)
                    v[j] = -2;
                break;
            }
        }

        for (auto itr : v)
            cout << itr << " ";
        cout << endl;
    }
    return 0;
}