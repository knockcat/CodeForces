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

        string str;
        cin >> str;

        int subGroup = n / k;

        vector<map<int, int>> vec(k + 1);

        for (int i = 0; i < n; ++i)
        {
            int pos = i % k;
            vec[pos][str[i]]++;
        }

        int ans = 0;
        subGroup += subGroup;

        for (int i = 0; i <= k / 2; ++i)
        {
            int maxi = 1;
            for (auto &it : vec[i])
            {
                maxi = max(maxi, it.second + vec[k - i - 1][it.first]);
            }
            for (auto &it : vec[k - i - 1])
            {
                maxi = max(maxi, it.second + vec[i][it.first]);
            }

            if (i == (k / 2))
            {
                if (k & 1)
                {
                    maxi = (maxi + 1) / 2;
                    subGroup /= 2;
                }
                else
                    continue;
            }

            ans += (subGroup - maxi);
        }
        cout << ans << endl;
    }
    return 0;
}