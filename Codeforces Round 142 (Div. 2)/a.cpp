#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int st, n;
    cin >> st >> n;

    vector<pair<int, int>> vp;

    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;

        vp.push_back({x, y});
    }

    int cnt = 0;

    sort(vp.begin(), vp.end());

    for (int i = 0; i < n; ++i)
    {
        if (st > vp[i].first)
        {
            ++cnt;
            st += vp[i].second;
        }
    }

    if (cnt == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}