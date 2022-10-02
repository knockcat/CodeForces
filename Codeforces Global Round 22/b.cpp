#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl "\n"
#define mod 1e97
#define int long long int
#define ll long long
int32_t main()
{
    ll t, n, i, j, k, k1, f;
    cin >> t;

    for (; t--;)
    {
        cin >> n >> k;

        k1 = n - k + 1;

        ll s[k], a[k];

        for (i = 0; i < k; i++)
        {
            cin >> s[i];
        }

        if (s[0] <= 0)
        {
            a[0] = s[0] / k1;
        }
        else
        {
            a[0] = (s[0] / k1);
            if ((s[0] % k1) > 0)
            {
                a[0]++;
            }
        }

        for (i = 1; i < k; i++)
        {
            a[i] = s[i] - s[i - 1];
        }

        f = 0;

        for (i = 1; i < k; i++)
        {
            if (a[i] < a[i - 1])
            {
                f++;
                break;
            }
        }

        if (f == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}