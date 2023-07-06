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
const ll eps = -1e9;
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

        int n, k;
        cin >> n >> k;

        vector<int> v(n), here;

        int sum = 0;

        for (auto &itr : v)
            cin >> itr;

        for (int i = 1; i < n; ++i)
        {
            here.push_back(abs(v[i] - v[i - 1]));
        }

        sort(here.begin(), here.end());

        for (int i = 0; i < n - k; ++i)
            sum += here[i];

        cout << sum << endl;
    }
    return 0;
}