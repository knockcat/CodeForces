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
        int n, k;
        cin >> n >> k;

        if (n == 1)
        {
            cout << k << endl;
            continue;
        }

        int msb = 0;
        for (int i = 0; i < 32; ++i)
        {
            ll have = (1LL << i) - 1;

            if (have <= k)
            {
                msb = have;
            }
            else
                break;
        }

        int rem = k - msb;

        vector<int> ans = {msb, rem};
        while (ans.size() != n)
            ans.push_back(0);

        for (auto &ele : ans)
            cout << ele << ' ';
        cout << endl;
    }
    return 0;
}