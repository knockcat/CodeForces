#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

using namespace std;

#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 2, 0);
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        ans += (a[i] != a[i + 1]) * (n - (i + 1) + 1) * i;
    }
    while (m--)
    {
        int i, x;
        cin >> i >> x;
        ans -= (a[i] != a[i - 1]) * (n - i + 1) * (i - 1);
        ans -= (a[i + 1] != a[i]) * (n - (i + 1) + 1) * i;
        a[i] = x;
        ans += (a[i] != a[i - 1]) * (n - i + 1) * (i - 1);
        ans += (a[i + 1] != a[i]) * (n - (i + 1) + 1) * i;
        cout << ans + n * (n + 1) / 2 << '\n';
    }
}