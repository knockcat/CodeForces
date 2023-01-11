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

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int ans;

    if (k == 0)
    {
        ans = a[0] - 1;
    }
    else
    {
        ans = a[k - 1];
    }

    int cnt = 0;

    for (int i = 0; i < n; ++i)
        if (a[i] <= ans)
            ++cnt;

    if (cnt != k || !(1 <= ans && ans <= 1000 * 1000 * 1000))
    {
        puts("-1");
        return 0;
    }

    printf("%d\n", ans);

    return 0;
}