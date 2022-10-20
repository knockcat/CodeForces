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

        vector<pair<int, int>> vp;
        vector<int> row(n, 0), col(n, 0);

        for (int i = 0; i < m; ++i)
        {
            int xi, yi;
            cin >> xi >> yi;
            vp.push_back({xi - 1, yi - 1});
            row[xi - 1] = 1;
            col[yi - 1] = 1;
        }

        // for (auto itr : vp)
        //     cout << itr.first << " " << itr.second << endl;
        if (m >= n)
        {
            cout << "NO" << endl;
        }
        else if (m < n)
            cout << "YES" << endl;
        else
        {
            bool flag = false;
            for (int i = 0; i < m; ++i)
            {
                int a = vp[i].first;
                int b = vp[i].second;
                for (int i = 0; i < n; ++i)
                {
                    if (row[a] == 0 or col[b] == 0)
                    {
                        flag = true;
                        break;
                    }
                }
            }

            if (flag == true)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}