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
        int n, x, y;
        cin >> n >> x >> y;

        if (x and y or (x + y) == 0)
            cout << -1 << endl;
        else
        {
            if ((n - 1) % max(x, y) == 0)
            {
                int k = 1, count = 0, opp = 2;
                for (int i = 0; i < n - 1; ++i)
                {
                    if (count == max(x, y))
                    {
                        count = 0;
                        k = opp;
                    }
                    ++count;
                    cout << k << " ";
                    ++opp;
                }
                cout << endl;
            }
            else
                cout << -1 << endl;
        }
    }
    return 0;
}
