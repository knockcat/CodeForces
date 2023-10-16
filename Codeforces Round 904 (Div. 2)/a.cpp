// JAI SHREE RAM
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

int sumofDigits(int num)
{
    int sum = 0;

    while (num > 0)
    {
        sum += (num % 10);
        num /= 10;
    }

    return sum;
}

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int x, k;
        cin >> x >> k;

        while (sumofDigits(x) % k != 0)
        {
            ++x;
        }

        cout << x << endl;
    }
    return 0;
}
