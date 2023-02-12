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

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

const int sqrt_lim = 1000001;

set<long long> prime_squares()
{
    static bool arr[sqrt_lim];

    for (int i = 2; i * i < sqrt_lim; i++)
    {
        if (!arr[i])
        {
            for (int j = i * i; j < sqrt_lim; j += i)
            {
                arr[j] = true;
            }
        }
    }

    set<long long> res;
    for (int i = 2; i < sqrt_lim; i++)
    {
        if (!arr[i])
            res.insert((long long)i * i);
    }
    return res;
}

int32_t main()
{
    fast;
    // ll tt;
    // cin >> tt;
    // while (tt--)
    // {
    // }

    set<long long> sq(prime_squares());

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        if (sq.find(x) != sq.end())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
