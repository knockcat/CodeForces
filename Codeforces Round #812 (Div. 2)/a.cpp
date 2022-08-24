#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long int
int32_t main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a;
        vector<int> b;

        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x == 0)
                a.push_back(y);
            else
                b.push_back(x);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int ans = 0;
        if (a.size() and a[0] < 0)
            ans += 2 * abs(a[0]);
        if (b.size() and b[0] < 0)
            ans += 2 * abs(b[0]);

        if (a.size() and a[a.size() - 1] > 0)
            ans += 2 * abs(a[a.size() - 1]);

        if (b.size() and b[b.size() - 1] > 0)
            ans += 2 * abs(b[b.size() - 1]);

        cout << ans << endl;
    }
}
