#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl "\n"
#define mod 1e97
// #define int long long int
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

        vector<int> d(n);

        for (int i = 0; i < n; ++i)
            cin >> d[i];

        vector<int> v(n);
        bool flag = false;
        v[0] = d[0];
        for (int i = 1; i < n; ++i)
        {
            

            if (d[i] != 0 and v[i-1] - d[i] >= 0)
            {
                flag = 1;
                break;
            }

            v[i] = abs(d[i] + v[i - 1]);
        }

        if (flag)
            cout << "-1" << endl;
        else
        {
            for (auto itr : v)
                cout << itr << " ";
            cout << endl;
        }
    }
}