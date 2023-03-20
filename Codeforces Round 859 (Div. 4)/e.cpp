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
    // fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int low = 1;
        int high = n;

        while (low < high)
        {
            int mid = (low + high) / 2;

            int ele = mid - low + 1;
            int sum = 0;
            cout << "? " << ele << " ";
            for (int i = low; i <= mid; i++)
            {
                cout << i << " ";
                sum += a[i];
            }
            cout << endl;

            int m;
            cin >> m;

            if (m == sum)
            {
                low = mid + 1;
            }
            else
                high = mid;
        }

        cout << "! " << low << endl;
    }
    return 0;
}
