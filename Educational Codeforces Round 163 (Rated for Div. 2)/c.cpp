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

        int n;
        cin >> n;

        vector<string> rows(2);
        for (auto &row : rows)
            cin >> row;

        queue<pair<int, int>> q;
        vector<vector<bool>> visited(2, vector<bool>(n, false));

        q.push({0, 0});
        visited[0][0] = true;

        bool ok = false;

        vector<int> dx = {0, 1, 0, -1};
        vector<int> dy = {1, 0, -1, 0};

        auto get = [&](int x, int y) -> pair<int, int>
        {
            if (x >= 0 and x < 2 and y >= 0 and y < n)
            {
                int nx = x;
                int ny = y + (rows[x][y] == '>' ? 1 : -1);
                if (!visited[nx][ny])
                {
                    return {nx, ny};
                }
            }
            return {-1, -1};
        };

        while (!q.empty())
        {
            auto here = q.front();
            q.pop();

            int x = here.first, y = here.second;
            // cout << x << ' ' << y << endl;

            for (int i = 0; i < 4; ++i)
            {
                int newx = x + dx[i];
                int newy = y + dy[i];

                auto nx = get(newx, newy);
                {
                    if (nx.first != -1)
                    {
                        visited[nx.first][nx.second] = 1;
                        q.push({nx.first, nx.second});
                    }
                }
            }
        }

        cout << (visited[1][n - 1] == 1 ? "YES" : "NO") << endl;
    }
    return 0;
}