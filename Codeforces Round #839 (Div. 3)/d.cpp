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
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        int ans = -1;

        int start = 0, end = 1000000000;

        while (start <= end)
        {
            int flag = 0;
            int mid = (start + end) / 2;
            for (int i = 0; i < n - 1; ++i)
            {
                if ((abs(v[i] - mid) > abs(v[i + 1] - mid)))
                {
                    if (v[i] > v[i + 1])
                        flag = 1;
                    else
                        flag = 2;
                    break;
                }
            }
            if (flag == 1)
                start = mid + 1;
            else if (flag == 2)
                end = mid - 1;
            else
            {
                ans = mid;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
