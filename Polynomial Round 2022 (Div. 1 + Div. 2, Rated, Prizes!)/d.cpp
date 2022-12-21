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

        int n, m;
        cin >> n >> m;

        vector<vector<int>> v(n, vector<int>(m));
        vector<int> count(n, 0);

        int one, ans;
        one = ans = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> v[i][j];
                if (v[i][j])
                {
                    ++one;
                    ++count[i];
                }
            }
        }

        if ((one % n) != 0)
        {
            cout << -1 << endl;
            continue;
        }

        int avg = one / n, sum = 0;

        for (int i = 0; i < n; ++i)
        {
            sum = 0;
            for (int j = 0; j < m; ++j)
            {
                if (v[i][j] == 1)
                {
                    ++sum;
                }
            }
            ans = ans + abs(sum - avg);
        }

        cout << ans / 2 << endl;
        int j = 0, k = 0;
        for (int i = 0; i < m; i++)
        {

            j = 0;
            k = 0;

            while (j < n and k < n)
            {
                while (j < n && (count[j] <= avg || v[j][i] == 0))
                {
                    j++;
                }

                while (k < n && (count[k] >= avg || v[k][i] == 1))
                {
                    k++;
                }

                if (j < n && k < n)
                {
                    count[j]--;
                    count[k]++;
                    swap(v[j][i], v[k][i]);
                    cout << j + 1 << " " << k + 1 << " " << i + 1 << "\n";
                }
            }
        }
    }

    return 0;
}
