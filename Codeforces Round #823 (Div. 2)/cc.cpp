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
        string a;
        cin >> a;
        int n = a.size();

        char s;

        s = a[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > s)
            {
                if (a[i] != '9')
                    a[i] = char(int(a[i]) + 1);
            }
            else
            {
                s = a[i];
            }
        }

        sort(a.begin(), a.end());

        cout << a << "\n";
    }
    return 0;
}
