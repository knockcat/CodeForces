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
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        sort(v.begin(), v.end());

        int ans = 0, pie = 0;

        int val = v[0] * 2 - 1;

        for (int i = 1; i < n; i++)
        {
            if (v[i] > val)
            {
                if ((v[i] % val) == 0)
                {
                    pie = v[i] / val;
                }
                else
                {
                    pie = v[i] / val;
                    pie++;
                }

                ans = ans + pie - 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}