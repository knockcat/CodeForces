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
        int n, k;
        cin >> n >> k;

        vector<int> v(n);

        for (int i = 0; i < n; ++i)
            cin >> v[i];

        int ans = 0, count = 0;
        vector<int> res;

        for (int i = 0; i < n; ++i)
        {
            if (count == k)
                break;
            int mx = v[i];
            vector<int> curr;
            for (int j = i + 1; j < n; ++j)
            {
                if (i % k == j % k)
                {
                    curr.push_back(v[j]);

                    // if (v[j] > mx)
                    //     swap(v[i], v[j]), mx = v[j];
                }
            }
            if (curr.size() && *max_element(curr.begin(), curr.end()) > mx)
                swap(v[i], *max_element(curr.begin(), curr.end())), ++count;
        }

        for (int i = 0; i < k; ++i)
            ans += v[i];
        cout << ans << endl;
    }
    return 0;
}
