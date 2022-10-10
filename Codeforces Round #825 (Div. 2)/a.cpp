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
        vector<int> a(n), b(n);

        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int j = 0; j < n; ++j)
            cin >> b[j];

        int ans = 0, ans1 = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i])
            {
                ++ans;
            }
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i])
            {
                ++ans1;
            }
        }

        cout << min(ans, ans1 + 1) << endl;
    }
    return 0;
}