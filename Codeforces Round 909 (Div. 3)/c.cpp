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

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;

        vector<int> v(n);

        for (auto &itr : v)
            cin >> itr;

        ll currSum = 0, maxSum = INT_MIN;

        for (int i = 0; i < n; ++i)
        {
            if (currSum == 0)
                currSum += v[i];
            else
            {
                if (i - 1 >= 0 and (v[i] & 1 and v[i - 1] % 2 == 0) or (v[i] % 2 == 0 and v[i - 1] & 1))
                    currSum += v[i];
                else
                    currSum = v[i];
            }
            maxSum = max(currSum, maxSum);
            if (currSum < 0)
                currSum = 0;
        }

        cout << maxSum << endl;
    }
    return 0;
}