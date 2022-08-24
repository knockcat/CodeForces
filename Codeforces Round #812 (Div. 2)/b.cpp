#include<bits/stdc++.h>
using namespace std;
#define fast std::ios::sync_with_stdio(false);cin.tie(NULL);
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

        int cnt = 0;

        int l[n];
        int r[n];
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool flag = true;

        l[0] = a[0];
        for (int i = 1; i < n; i++)
            l[i] = max(l[i - 1], a[i]);

        r[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
            r[i] = max(r[i + 1], a[i]);

        for (int i = 0; i < n; i++)
        {
            if (l[i] != a[i] and r[i] != a[i])
                flag = false;
        }
        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }


}

