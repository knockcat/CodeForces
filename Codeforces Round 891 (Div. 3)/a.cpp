// KNOCKCAT

#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long int
#define endl "\n"

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod = 1e9 + 7;
const ll eps = -1e9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;

        vector<int> v(n);

        int odd = 0, ev = 0;
        for (auto &itr : v)
        {
            cin >> itr;
            if (itr & 1)
                ++odd;
            else
                ++ev;
        }
        if (n == 2)
        {
            if (ev == 2 or odd == 2)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else if (odd % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (odd == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}