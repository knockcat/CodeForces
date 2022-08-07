#include <bits/stdc++.h>
#define fast std::ios::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {

        int n, h, m;
        cin >> n >> h >> m;
        pair<int, int> p = {h, m};
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end());

        auto it = lower_bound(v.begin(), v.end(), p);

        if (it == v.end())
            it = v.begin();

        pair<int, int> here = *it;

        int ans = 0;
        while (h != here.first or m != here.second)
        {
            if (h == here.first and here.second >= m)
            {
                ans += here.second - m;
                break;
            }
            else
            {
                ans += (60 - m);
                m = 0;
                h++;
                if (h == 24)
                    h = 0;
            }
        }

        if (ans == 0)
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }

        int hour = ans / 60;
        int min = ans % 60;
        cout << hour << " " << min << endl;
    }
}