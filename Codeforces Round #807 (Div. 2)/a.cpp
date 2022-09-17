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
        int n, x;
        cin >> n >> x;

        vector<int> v(2 * n);
        int count = 0;
        for (int i = 0; i < 2 * n; ++i)
            cin >> v[i];

        sort(v.begin(), v.end());

        bool flag = true;
 
        for (int i = 0; i < n; i++)
        {
            if (v[i] + x > v[i + n])
                flag = false;
        }
 
        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
