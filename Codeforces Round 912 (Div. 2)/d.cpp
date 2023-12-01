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

// You better take more time but avoid penalties
// Look at Constraints

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat

    // }

    ll n, q;
    cin >> n >> q;

    vector<int> v(n);

    for (auto &itr : v)
        cin >> itr;

    function<long long(long long, int)> calculate = [&](long long curr, int idx)
    {
        for (ll i = 62; i > idx; --i)
        {
            if (curr & (1LL << i))
                curr ^= (1LL << i);
        }

        return curr;
    };

    while (q--)
    {
        ll k;
        cin >> k;

        vector<long long> curr = v;

        for (ll i = 62; i >= 0; --i)
        {
            long long add = 0LL;

            for (auto &ele : curr)
            {
                if (ele & (1LL << i))
                    continue;
                else
                {
                    long long num = 1LL << i;
                    long long curAdd = (num - calculate(ele, i));
                    add += curAdd;

                    if (add > k)
                    {
                        break;
                    }
                }
            }
            if (add <= k)
            {
                k -= add;
                for (auto &ele : curr)
                {
                    if (ele & (1LL << i))
                        continue;
                    long long num = 1LL << i;
                    long long curAdd = (num - calculate(ele, i));
                    ele += curAdd;
                }
            }
        }

        long long bitAnd = curr[0];

        for (auto &itr : curr)
        {
            bitAnd &= itr;
        }

        cout << bitAnd << endl;
    }
    return 0;
}