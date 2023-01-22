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
const ll eps = 1e-9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    ll i, j, k;
    ll n, count = 0;
    ll seg = 0;
    ll l, r;

    cin >> n;
    ll a[n], s[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        s[i] = a[i];
    }

    sort(s, s + n);
    for (i = 0; i < n; i++)
    {
        if (s[i] == a[i])
            count++;
    }

    if (count == n)
    {
        cout << "yes\n1 1";
        return 0;
    }

    for (i = 0; i < n - 1, seg < 1;)
    {
        if (a[i] < a[i + 1])
        {
            i++;
        }

        else
        {
            l = i;
            r = i;
            while (a[i] > a[i + 1] && i < n - 1)
            {
                i++;
                r++;
            }

            sort(a + l, a + r + 1);
            seg++;
        }
    }

    /*for(i=0;i<n;i++)
        cout<<a[i]<<" ";*/

    for (i = 0; i < n; i++)
    {
        if (s[i] != a[i])
        {
            cout << "no";
            return 0;
        }
    }

    cout << "yes\n"
         << l + 1 << " " << r + 1;
    return 0;
}
