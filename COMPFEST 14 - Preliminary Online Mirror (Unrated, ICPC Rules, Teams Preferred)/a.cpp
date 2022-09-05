#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long int

int32_t main()
{
    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    int n, m;
    cin >> n >> m;
    if (m == 1)
        cout << n - 1 * (m) << endl;
    else
        cout << (n * (m - 1)) << endl;
    // }
    return 0;
}
