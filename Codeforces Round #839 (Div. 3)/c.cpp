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
        int k, n;
        cin >> k >> n;

        vector<int> v, ans;
        int take = 1;
        int ok = 0;
        for (int i = 0; i < k; ++i)
        {
            take += ok;
            v.push_back(take);
            ++ok;
        }
        int have = k;
        for (int i = 0; i < k; ++i)
        {
            if (v[i] < n and n - v[i] >= have or n-v[i] == have - 1)
            {
                ans.push_back(v[i]);
                --have;
            }
        }

        while (have--)
        {
            if (ans.size() == 0)
            {
                ans.push_back(1);
                continue;
            }
            ans.push_back(ans.back() + 1);
        }

        for (auto itr : ans)
            cout << itr << " ";
        cout << endl;
    }
    return 0;
}
