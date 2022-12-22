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

int ans;

bool checkBound(int i, int j, vector<string> &v)
{
    if (i >= 0 and i < v.size() and j >= 0 and j < v[0].size())
    {
        return true;
    }
    return false;
}

void dfs(int i, int j, vector<vector<bool>> &visited, vector<string> &v)
{
    if (v[i][j] != 'B')
        return;
    visited[i][j] = true;

    if (checkBound(i + 1, j, v) and v[i + 1][j] == 'B' and !visited[i + 1][j])
    {
        ++ans;
        dfs(i + 1, j, visited, v);
    }
    else if (checkBound(i - 1, j, v) and v[i - 1][j] == 'B' and !visited[i - 1][j])
    {
        ++ans;
        dfs(i - 1, j, visited, v);
    }
    else if (checkBound(i, j + 1, v) and v[i][j + 1] == 'B' and !visited[i][j + 1])
    {
        ++ans;
        dfs(i, j + 1, visited, v);
    }
    else
        return;
}

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int m;
        cin >> m;

        vector<string> v(2);
        cin >> v[0];
        cin >> v[1];

        vector<vector<bool>> visited(2, vector<bool>(m, false));

        int count = 0;
        for (auto itr : v)
        {
            for (auto x : itr)
                if (x == 'B')
                    ++count;
        }

        // cout << count << endl;
        int ans1, ans2;
        ans1 = ans2 = ans = 0;

        if (v[0][0] == 'B')
            ++ans;
        dfs(0, 0, visited, v);

        ans1 = ans;
        for (int i = 0; i < visited.size(); ++i)
        {
            for (int j = 0; j < visited[0].size(); ++j)
                visited[i][j] = false;
        }

        ans = 0; // reinitialize

        if (v[1][0] == 'B')
            ++ans;

        dfs(1, 0, visited, v);
        ans2 = ans;

        // cout << ans1 << " " << ans2 << endl;

        if (ans1 == count or ans2 == count)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
