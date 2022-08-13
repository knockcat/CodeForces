#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int i = 0;
        int j = 0;

        int n, s;
        cin >> n >> s;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = INT_MAX;
        int sum = 0;
        while (i < n)
        {
            sum += a[i];

            while (j < n and sum > s)
            {
                sum -= a[j];
                j++;
            }

            if (s == sum)
            {
                ans = min(ans, j + (n - (i + 1)));
            }
            i++;
        }

        if (ans == INT_MAX)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}
