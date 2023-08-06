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

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n, k;
        cin >> n >> k;

        vector<int> v(n);

        for (auto &itr : v)
            cin >> itr;

        int low = *max_element(v.begin(), v.end());
        int high = 1e15;

        while (low < high - 1)
        {
            int mid = (low + high) >> 1;

            auto check = [&]() -> bool
            {
                for (int i = 0; i < n; ++i)
                {
                    int need = mid;
                    int ops = 0;
                    for (int j = i; j < n; ++j)
                    {
                        int more = need - v[j];

                        if (more < 1)
                        {
                            if (ops <= k)
                                return true;
                            else
                                break;
                        }

                        ops += need - v[j];
                        --need;
                        need = max(need, 1LL);
                    }
                }
                return false;
            };
            if (check())
                low = mid;
            else
                high = mid;
        }

        cout << low << endl;
    }
    return 0;
}