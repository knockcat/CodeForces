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

        cout << (n - 3) / 3 - 1 << endl;
    }
    return 0;
}