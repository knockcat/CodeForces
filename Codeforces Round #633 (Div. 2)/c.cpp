#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, y, m = 0;
        cin >> n;
        cin >> x;
        for (ll i = 1; i < n; i++)
        {
            cin >> y;
            if (y < x)
                m = max(m, x - y);
            x = max(x, y);
        }
        cout << ceil(log2(m + 1)) << endl;
    }
}