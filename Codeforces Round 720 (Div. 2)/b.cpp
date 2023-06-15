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

        int n;
        cin >> n;

        vector<int> v(n);

        for (auto &itr : v)
            cin >> itr;

        int idx = min_element(v.begin(), v.end()) - v.begin();

        int mini = *min_element(v.begin(), v.end());

        vector<vector<int>> ans;

        for (int i = idx + 1; i < n; ++i)
        {
            if (v[i] < v[i - 1])
            {
                ans.push_back({idx + 1, i + 1, mini, v[i - 1] + 1});
                v[i] = v[i - 1] + 1;
            }
            else
            {
                ans.push_back({i, i + 1, v[i - 1], v[i - 1] + 1});
                v[i] = v[i - 1] + 1;
            }
        }

        for (int i = idx - 1; i >= 0; --i)
        {
            if (v[i] < v[i + 1])
            {
                ans.push_back({idx + 1, i + 1, mini, v[i + 1] + 1});
                v[i] = v[i + 1] + 1;
            }
            else
            {
                ans.push_back({i + 2, i + 1, v[i + 1], v[i + 1] + 1});
                v[i] = v[i + 1] + 1;
            }
        }

        cout << ans.size() << endl;

        for (auto itr : ans)
        {
            for (auto x : itr)
                cout << x << ' ';
            cout << endl;
        }
    }
    return 0;
}
