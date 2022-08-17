#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
 
        vector<int>a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        int l[n];
        l[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            l[i] = max(l[i - 1], a[i]);
        }
 
 
        int r[n];
        r[n - 1] = n + 1;
        for (int i = n - 1; i >= 0; i--)
        {
            int j = i + 1;
            while (j < n and a[j] < a[i])
            {
                j = r[j];
            }
 
            r[i] = j;
 
        }
 
        while (k--)
        {
            int j, x;
            cin >> j >> x;
            int ans = 0;
 
            j--;
            if (l[j] != a[j])
            {
                cout << 0 << endl;
            }
            else
            {
                if (j >= 1)
                {
                    x -= j;
                    if (x >= 0)
                        ans++;
                    else
                    {
                        cout << 0 << endl;
                        continue;
                    }
                }
 
                if (r[j] == n)
                {
                    cout << x + ans << endl;
                }
                else
                {
                    int more = (r[j] - j) - 1;
 
                    cout << ans + min(x, more) << endl;
                }
 
 
            }
 
        }
 
 
    }

    return 0;
}
