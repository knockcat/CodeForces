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

bool comp(const pair<int, int> &a,
          const pair<int, int> &b)
{
    return a.first > b.first;
}

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        // ith monster has health hi and power pi.

        int n, k;
        cin >> n >> k;

        vector<int> h(n), p(n);

        for (int i = 0; i < n; ++i)
            cin >> h[i];
        for (int i = 0; i < n; ++i)
            cin >> p[i];

        vector<pair<int, int>> vp;
        for (int i = 0; i < n; ++i)
        {
            vp.push_back({h[i], p[i]});
        }

        sort(vp.begin(), vp.end(), comp);
        // for (auto itr : vp)
        //     cout << itr.first << " " << itr.second << endl;
        int end = n;
        while (k > 0)
        {
            int mini = INT_MAX;
            bool flag = false;
            for (int i = 0; i < end; ++i)
            {
                if (vp[i].first - k > 0)
                {
                    vp[i].first -= k;
                    mini = min(mini, vp[i].second);
                    flag = true;
                }
                else
                {
                    vp[i].first = 0;
                    end = i;
                    break;
                }
            }
            // cout << "chala";
            // cout << end << endl;
            if (mini == INT_MAX)
                break;
            k -= mini;
        }

        if (k >= 0 and vp[0].first == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
