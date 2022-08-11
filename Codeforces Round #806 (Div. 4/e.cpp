#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(NULL);

char a[105][105];
int n;
int vis[105][105];
pair<int, int> rotate(int i, int j)
{
    int new_i = j;
    int new_j = n - i - 1;

    return {new_i, new_j};
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                vis[i][j] = 0;
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (vis[i][j])
                    continue;

                int sum = 0;
                sum += a[i][j] - '0';
                vis[i][j] = 1;

                pair<int, int> p = rotate(i, j);
                int x = p.first;
                int y = p.second;
                vis[x][y] = 1;
                sum += a[x][y] - '0';

                p = rotate(x, y);
                x = p.first;
                y = p.second;
                sum += a[x][y] - '0';
                vis[x][y] = 1;

                p = rotate(x, y);
                sum += a[p.first][p.second] - '0';
                vis[p.first][p.second] = 1;

                ans += min(sum, 4 - sum);
            }
        }

        cout << ans << endl;
    }
}
