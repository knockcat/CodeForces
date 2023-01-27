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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        // Knockcat
        int n;
        cin >> n;

        vector<vector<int>> v(n, vector<int>(n - 1));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n - 1; ++j)
                cin >> v[i][j];
        }

        vector<int> count(n + 2, 0);
        count[0] = 1;

        vector<int> take = v[0];
        for (int itr : take)
        {
            ++count[itr];
        }
        int miss = -1;
        for (int i = 1; i < count.size(); ++i)
        {
            if (count[i] == 0)
            {
                miss = i;
                break;
            }
        }
        int x = -1, y = -1;
        // for(auto itr :count)
        //     cout<<itr<<" ";
        // cout<<endl;
        // cout << miss << endl;

        for (int i = 0; i < n; ++i)
        {
            int ok = 0;
            for (int k = 0; k < n; ++k)
            {
                if (i == k)
                    continue;
                if (v[i][1] == v[k][0])
                {
                    x = i, y = k, ok = 1;
                    break;
                }
            }
            if (ok)
                break;
        }

        cout << v[x][0] << " ";
        for (int i = 0; i < n - 1; ++i)
            cout << v[y][i] << " ";
        cout << endl;
    }
    return 0;
}