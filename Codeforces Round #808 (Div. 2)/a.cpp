#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl "\n"
#define mod 1e97
#define int long long int
int32_t main()
{
    // KNOCKCAT

    fast;
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        bool flag = true;

        for (int i = 0; i < n; ++i)
            cin >> v[i];

        for (int i = 1; i < n; ++i)
        {
            if (v[i] == 0)
                continue;
            if (v[i] % v[0])
                flag = false;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
