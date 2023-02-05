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
    // ll tt;
    // cin >> tt;
    // while (tt--)
    // {
    // }

    int n;
    cin >> n;
    int a = 0, b = 0, c = 0, d = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            a++;
        }
        else if (t == 2)
        {
            b++;
        }
        else if (t == 3)
        {
            c++;
        }
        else
        {
            d++;
        }
    }

    count += d;

    if (c < a)
    {
        count += c;
        a = a - c;
        c = 0;
    }
    else if (a <= c)
    {
        count += a;
        c = c - a;
        a = 0;
    }

    if (c > 0)
    {
        count += c;
        c = 0;
    }

    if (b > 0)
    {
        count += b / 2;
        b = b % 2;
    }

    int left = a + (b * 2);
    if (left <= 4 && left > 0)
    {
        count += 1;
    }
    else if (left % 4 != 0)
    {
        count += (left / 4) + 1;
        count += left / 4;
    }

    cout << count << "\n";
}
