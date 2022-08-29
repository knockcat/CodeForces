#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long int

int dr[4] = {1, -1, 0, 0};
int dc[4] = {0, 0, 1, -1};

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
        {
            auto it = lower_bound(b.begin(), b.end(), a[i]);

            cout << *it - a[i] << " ";
        }
        cout << endl;
        vector<int> ans(n);
        ans[n - 1] = b[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i + 1] <= b[i])
            {
                ans[i] = ans[i + 1];
            }
            else
            {
                ans[i] = b[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] - a[i] << " ";
        }
        cout << endl;
    }
}
