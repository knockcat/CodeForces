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
const ll eps = 1e-9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (auto &itr : v)
        cin >> itr;

    int maxSum = INT_MAX, sum = 0;
    int ans = -1;

    int i = 0, j = 0;

    while (j < n)
    {
        sum += v[j];

        if (j - i + 1 == k)
        {
            if (sum < maxSum)
            {
                ans = i + 1;
                maxSum = sum;
            }
            sum -= v[i++];
        }
        ++j;
    }

    cout << ans << endl;

    return 0;
}