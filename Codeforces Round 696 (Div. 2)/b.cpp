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

int32_t main()
{
    fast;

    vector<bool> seive(1e6 + 5, 1);
    vector<int> primes;

    for (int i = 2; i * i <= 1e6; ++i)
    {
        if (seive[i])
        {
            for (int j = i * i; j <= 1e6; j += i)
            {
                seive[j] = false;
            }
        }
    }

    for (int i = 2; i <= 1e6; ++i)
    {
        if (seive[i])
            primes.push_back(i);
    }

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        ll d;
        cin >> d;

        ll f = -1, s = -1, idx = -1;

        for (int i = 0; i < primes.size(); ++i)
        {
            if (primes[i] - 1 >= d)
            {
                f = primes[i];
                idx = i;
                break;
            }
        }

        for (int i = idx + 1; i < primes.size(); ++i)
        {
            if (primes[i] - f >= d)
            {
                s = primes[i];
                break;
            }
        }

        cout << f * 1LL * s << endl;
    }
    return 0;
}