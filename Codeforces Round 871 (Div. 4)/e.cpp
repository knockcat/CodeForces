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

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n, m;
        cin >> n >> m;

        vector<vector<int>> v(n, vector<int>(m));
        vector<vector<int>> visited(n, vector<int>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
                cin >> v[i][j];
        }

        int ans = 0;

        vector<int> dx = {-1, 0, 0, 1};
        vector<int> dy = {0, -1, +1, 0};

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (v[i][j] > 0 and !visited[i][j])
                {
                    queue<pair<int, int>> q;

                    visited[i][j] = 1;

                    q.push({i, j});

                    int step = 0;

                    while (!q.empty())
                    {
                        int x = q.front().first;
                        int y = q.front().second;

                        step += v[x][y];

                        q.pop();

                        for (int i = 0; i < 4; ++i)
                        {
                            int newx = dx[i] + x;
                            int newy = dy[i] + y;

                            if (newx >= 0 and newy >= 0 and newx < n and newy < m and v[newx][newy] > 0 and !visited[newx][newy])
                            {
                                visited[newx][newy] = true;
                                q.push({newx, newy});
                            }
                        }
                    }

                    ans = max(ans, step);
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}