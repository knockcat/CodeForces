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

// If I'll be good at programming she will be mine

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

        vector<int> arr(n);
        for (auto &ele : arr)
            cin >> ele;

        int ans = 0;

        sort(arr.begin(), arr.end());
        vector<int> curr;

        curr.push_back(arr[n - 1]);
        curr.push_back(arr[0]);
        curr.push_back(arr[n - 2]);
        curr.push_back(arr[1]);

        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                for (int k = 0; k < 4; ++k)
                {
                    for (int l = 0; l < 4; ++l)
                    {
                        if (i != j and i != k and i != l and j != k and j != l and k != l)
                        {
                            int val = abs(curr[i] - curr[j]) + abs(curr[j] - curr[k]) + abs(curr[k] - curr[l]) + abs(curr[l] - curr[i]);

                            ans = max(ans, val);
                        }
                    }
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}