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
        int n, m;
        cin >> n >> m;

        if (n == 1 or m == 1)
        {
            cout << n << " " << m << endl;
        }
        else if (n <= 3 and m <= 3)
        {
            cout << 2 << " " << 2 << endl;
        }
        else
            cout << n << " " << m << endl;
    }
}