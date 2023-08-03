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

    vector<vector<ll>> bitCount(200005);

    vector<ll> freq(32, 0);

    for (int i = 0; i < 32; ++i)
    {
        bitCount[0].push_back(freq[i]);
    }

    for (ll i = 1; i < 200005; ++i)
    {
        ll curr = i;
        ll j = 0;
        while (curr > 0)
        {
            if (curr & 1)
            {
                ++freq[j];
            }
            ++j;
            curr >>= 1;
        }
        for (int k = 0; k < 32; ++k)
        {
            bitCount[i].push_back(freq[k]);
        }
    }

    while (tt--)
    {
        // knockcat

        int l, r;
        cin >> l >> r;

        int tot = r - l + 1;
        int ans = tot;

        for (int i = 0; i < 32; ++i)
        {
            int setBit = bitCount[r][i] - bitCount[l][i];

            ans = min(ans, tot - setBit);
        }

        cout << ans << endl;
    }
    return 0;
}