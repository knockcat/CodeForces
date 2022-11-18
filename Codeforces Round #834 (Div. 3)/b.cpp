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
        // Knockcat

        int n, m;
        cin >> n >> m;
        bool one = false;

        vector<int> visited(1001, 0);
        vector<int> v(n);
        int maxi = -1e9;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            maxi = max(maxi, v[i]);
            ++visited[v[i]];
        }

        if (m == 0)
        {
            one = true;
        }
        else
        {
            for (int i = 1; i < visited.size(); ++i)
            {
                if (m == 0)
                {
                    one = true;
                    break;
                }
                else if (m < 0)
                {
                    one = false;
                    break;
                }

                if (!visited[i])
                {
                    m -= i;
                    maxi = max(maxi, i);
                    ++visited[i];
                }
            }
        }

        for (int i = 1; i <= maxi; ++i)
        {
            if (!visited[i])
            {
                one = false;
                break;
            }
        }
        if (one)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
