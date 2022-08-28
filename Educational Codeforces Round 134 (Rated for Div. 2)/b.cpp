#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

bool isvalid(vector<vector<int>> &v, int n, int m, int x, int y)
{
    if (x >= 0 && x < n && y >= 0 && y < m && v[x][y] != -1)
        return true;
    return false;
}

int32_t main()
{
    fast;
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, m, x, y, d;
        cin >> n >> m >> x >> y >> d;
        
        if (x - d > 1 && y + d < m)
            cout << m + n - 2 << endl;
        else if (y - d > 1 && x + d < n)
            cout << m + n - 2 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}