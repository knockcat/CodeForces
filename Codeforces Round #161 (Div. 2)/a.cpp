#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl "\n"
#define mod 1e97
#define int long long int
int32_t main()
{
    // KNOCKCAT

    fast;

    vector<vector<int>> v(5, vector<int>(5));
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cin >> v[i][j];
        }
    }

    int row = 0, col = 0;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (v[i][j] == 1)
            {
                row = i;
                col = j;
                break;
            }
        }
    }
    // cout<<row<<" "<<col<<endl;
    cout << abs(row - 2) + abs(col - 2) << endl;

    return 0;
}
