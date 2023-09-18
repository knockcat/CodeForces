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

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);

        int x = 0;
        int maxX = 0, minX = 0;

        for (auto &itr : a)
        {
            cin >> itr;
            x ^= itr;
        }

        int numWithMaxSetBits = b[0];
        int numWithMinSetBits = b[0];

        int maxi = 0, mini = 64;

        int bOR = 0;

        for (auto &itr : b)
        {
            cin >> itr;

            bOR |= itr;

            int setBits = __builtin_popcount(itr);

            if (setBits > maxi)
            {
                maxi = max(maxi, setBits);
                numWithMaxSetBits = itr;
            }

            if (setBits < mini)
            {
                mini = min(mini, setBits);
                numWithMinSetBits = itr;
            }
        }

        // cout << numWithMaxSetBits << ' ' << numWithMinSetBits << endl;

        int forMaxiX = 0;
        int forMiniX = 0;

        vector<int> a2 = a;

        vector<int> a3 = a;

        for (auto &itr : a2)
        {
            itr |= numWithMaxSetBits;
        }
        for (auto &itr : a)
        {
            itr |= numWithMinSetBits;
        }
        for (auto &itr : a3)
        {
            itr |= bOR;
        }

        // for (auto &itr : a2)
        //     cout << itr << ' ';
        // cout << endl;
        // for (auto &itr : a)
        //     cout << itr << ' ';
        // cout << endl;

        int bORXOR = 0;

        for (auto &itr : a2)
        {
            forMaxiX ^= itr;
        }
        for (auto &itr : a)
        {
            forMiniX ^= itr;
        }
        for (auto &itr : a3)
        {
            bORXOR ^= itr;
        }

        maxX = max({x, forMaxiX, forMiniX, bORXOR});
        minX = min({x, forMaxiX, forMiniX, bORXOR});

        cout << minX << " " << maxX << endl;
    }
    return 0;
}