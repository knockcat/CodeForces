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

        string str;
        cin >> str;

        string ans;
        int a, b, c,d;
        for (int i = 0; i < n; ++i)
        {
            a = str[i] - '0';
            if (i + 1 < n)
                b = str[i + 1] - '0';
            if (i + 2 < n)
                c = str[i + 2] - '0';

            if (i + 2 < n)
            {
                c = str[i + 2] - '0';

                if (i + 3 < n)
                    d = str[i + 3] - '0';

                if (i+3 < n and c== 0 and d == 0)
                {
                    int val = a;
                    val += 96;
                    ans += (char)val;
                }
                else if (c == 0)
                {
                    int val = a * 10 + b;
                    val += 96;
                    // cout<<val<<endl;
                    ans += (char)val;
                    i += 2;
                }
                else if(c != 0)
                {
                    int val = a;
                    val += 96;
                    ans += (char)val;
                    // cout<<val<<endl;
                }
            }
            else
            {
                int val = a;
                val += 96;
                ans += (char)val;
                // cout<<val << endl;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
