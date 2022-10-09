#include <bits/stdc++.h>
#define int long long
using namespace std;
int T;
int l, r;
int f(int x)
{
    if (!x)
        return 0;
    int xx = sqrt(x);
    return 3ll * (xx - 1) + (x - xx * xx) / xx + 1ll;
}
signed main()
{
    cin >> T;
    while (T--)
    {
        cin >> l >> r;
        cout << f(r) - f(l - 1) << endl;
    }
    return 0;
}