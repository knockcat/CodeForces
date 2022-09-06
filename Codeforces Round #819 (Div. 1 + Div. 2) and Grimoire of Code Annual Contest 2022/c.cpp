#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int ans = 1;
        for (int i = 1; i < 2 * n; ++i)
        {
            if (s[i] == '(' and s[i - 1] == '(')
                ++ans;
        }

        cout << ans<<endl;
    }
}