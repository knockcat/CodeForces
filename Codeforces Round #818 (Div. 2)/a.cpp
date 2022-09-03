#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
// #define int long long int

int32_t main()
{
    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        cout << n + 2 * (n/2) + 2 * (n / 3) << endl;
    }
    return 0;
}