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
const ll maxn = 1e5 + 10;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine -> Success :D

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;

        map<int, int> mp;

        while (n % 2 == 0)
        {
            ++mp[2];
            n /= 2;
        }

        for (int i = 3; i * i <= n; ++i)
        {
            while (n % i == 0)
            {
                ++mp[i];
                n /= i;
            }
        }

        if (n > 2)
        {
            ++mp[n];
        }

        set<int> have;

        for (auto &itr : mp)
        {
            have.insert(itr.first);
        }

        ll ans = 0;

        while (!have.empty())
        {
            int minCnt = INT_MAX;

            for (auto &[f, e] : mp)
            {
                minCnt = min(minCnt, e);
            }

            set<int> curr;

            ll mult = 1;

            if (have.size() == 1)
            {
                mult = *have.begin() * 1LL * minCnt;
                have = curr;
            }
            else
            {
                for (auto &ele : have)
                {
                    if (mp[ele] == minCnt)
                    {
                        mp.erase(ele);
                    }
                    else
                    {
                        curr.insert(ele);
                        mp[ele] -= minCnt;
                    }

                    mult = (mult * 1LL * ele);
                }

                mult = mult * 1LL * minCnt;

                have = curr;
            }

            ans += mult;
        }

        cout << ans << endl;
    }

    return 0;
}