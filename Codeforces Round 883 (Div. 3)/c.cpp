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

        int n, m, h;
        cin >> n >> m >> h;

        vector<vector<int>> v(n, vector<int>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
                cin >> v[i][j];
        }

        for (int i = 0; i < n; ++i)
        {
            sort(v[i].begin(), v[i].end());
        }

        vector<pair<pair<int, int>, int>> vp;

        for (int i = 0; i < n; ++i)
        {
            int sum = 0;
            vector<int> pref;
            int cnt = 0;
            for (int j = 0; j < m; ++j)
            {
                if (pref.empty())
                {
                    pref.push_back(v[i][j]);

                    if (pref.back() <= h)
                        ++cnt;
                    else
                        break;
                }
                else
                {
                    if (pref.back() + v[i][j] <= h)
                    {
                        pref.push_back(pref.back() + v[i][j]);
                        ++cnt;
                    }
                    else
                        break;
                }

                sum += pref.back();
            }

            vp.push_back({{cnt, sum}, i + 1});
        }

        // cout << endl;

        sort(vp.begin(), vp.end(), [&](const auto &a, const auto &b)
             {
            if(a.first.first == b.first.first)
            {
                if(a.first.second == b.first.second)
                {
                    return a.second < b.second;
                }
                return a.first.second < b.first.second;
            }
            
            return a.first.first > b.first.first; });

        // for (auto itr : vp)
        // {
        //     cout << itr.first.first << ' ' << itr.first.second << ' ' << itr.second << endl;
        // }
        int ans = -1;

        for (int i = 0; i < n; ++i)
        {
            if (vp[i].second == 1)
                ans = i + 1;
        }

        cout << ans << endl;
    }
    return 0;
}