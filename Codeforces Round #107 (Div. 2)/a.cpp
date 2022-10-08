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

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalmilk = k * l / nl;
    int totalslice = c * d;
    int totalsalt = p / np;

    cout << min(totalmilk, min(totalslice, totalsalt)) / n << endl;

    return 0;
}
