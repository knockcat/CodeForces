// JAI SHREE RAM
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

        int n, k;

        cin >> n >> k;

        unordered_map<int, int> mp;

        vector<int> v(n);

        vector<int> ans;

        for (auto &itr : v)
        {
            cin >> itr;
            ++mp[itr];
        }

        int high = n;

        int start = 0, end = n - 1;

        for (int i = 1; i <= k; ++i)
        {
            if (mp.find(i) == mp.end())
            {
                ans.push_back(0);
            }
            else
            {
                while (start <= end and v[start] < i)
                    ++start;
                while (end >= start and v[end] < i)
                    --end;

                ans.push_back((abs(start - end) + 1) * 2);
            }
        }

        for (auto &itr : ans)
            cout << itr << ' ';
        cout << endl;
    }
    return 0;
}