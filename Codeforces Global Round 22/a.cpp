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
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        for (int i = 0; i < n; ++i)
            cin >> b[i];

        vector<int> one, two;
        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] & 1)
                one.push_back(b[i]);
            else
                two.push_back(b[i]);
        }

        sort(one.begin(), one.end(), greater<int>());
        sort(two.begin(), two.end(), greater<int>());

        if (one.size() == two.size())
        {
            for (auto itr : one)
                ans += 2 * itr;

            for (auto itr : two)
                ans += 2 * itr;

            ans -= min(one.back(), two.back());
        }
        else
        {
            int mini = min(one.size(), two.size());

            for (int i = 0; i < mini; ++i)
            {
                ans += 2 * one[i];
                ans += 2 * two[i];
            }

            for (int i = mini; i < one.size(); ++i)
                ans += one[i];
            for (int i = mini; i < two.size(); ++i)
                ans += two[i];
        }

        cout << ans << endl;
    }
}