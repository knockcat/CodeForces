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

        int start = 1, end = n * n;
        vector<vector<int>> v(n, vector<int>(n));

        for (int i = 0; i < n; ++i)
        {
            if (i & 1)
            {
                for (int j = n - 1; j >= 0; --j)
                {
                    if (j % 2 == 0)
                        v[i][j] = end--;
                    else
                        v[i][j] = start++;
                }
            }
            else
            {
                for (int j = 0; j < n; ++j)
                {
                    if (j & 1)
                        v[i][j] = end--;
                    else
                        v[i][j] = start++;
                }
            }
        }
        for (auto itr : v)
        {
            for (auto x : itr)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
