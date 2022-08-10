#include <bits/stdc++.h>
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        long long int n;
        cin >> n;

        vector<long long int> v;
        long long int cnt = 0;
        long long int ans = 0;

        for (int i = 1; i <= n; ++i)
        {

            int x;
            cin >> x;

            if (x < i)
            {
                auto it = lower_bound(v.begin(), v.end(), x) - v.begin();
                ans += it;

                v.push_back(i);
            }
        }
        cout << ans << endl;
    }
}