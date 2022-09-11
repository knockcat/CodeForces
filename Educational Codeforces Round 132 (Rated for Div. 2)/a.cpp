#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define mod 1e9 + 7
#define endl "\n"
#define int long long int

int32_t main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("i.txt", "r", stdin);
    // freopen("o.txt", "w", stdout);
    // #endif

    int tt;
    cin >> tt;
    while (tt--)
    {
        int x;
        cin >> x;
        int a[4];
        for (int i = 1; i <= 3; i++)
        {
            cin >> a[i];
        }

        int now = x;
        if (a[x] == 0 or a[a[x]] == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
