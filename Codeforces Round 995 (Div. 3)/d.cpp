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

        // with 1 element smallest right i remove so that sum <= r;
        // with 1 element smallest right i remove so that sum <= l-1;

        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> v(n);
        ll sum = 0;
        for (auto &ele : v)
        {
            cin >> ele;
            sum += ele;
        }
        sort(v.begin(), v.end());
        ll ans = 0;

        auto getIdx = [&](int val, int cur)
        {
            int low = 0, high = n - 1;
            while (low <= high)
            {
                int mid = (low + high) / 2;
                int got = val + v[mid];
                if (sum - got > cur)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            return low;
        };

        for (int i = 0; i < n; ++i)
        {
            int val = v[i];
            int idx = getIdx(val, r);
            // cout<<idx<<endl;
            if (idx <= i)
                idx = i+1;
            int idx2 = getIdx(val, l - 1);
            if (idx2 <= i)
                idx2 = i+1;
            // cout<<idx2<<endl;
            ans += (idx2 - idx);
        }
        cout << ans << endl;
    }
    return 0;
}