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

        vector<int> v(n);

        unordered_map<int, int> mp;

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];

            ++mp[v[i]];
        }

        int last = v.back();

        if (v[0] == last and (mp[v[0]] % k == 0 or mp[v[0]] >= k))
            cout << "YES" << endl;
        else
        {
            bool ok = false;
            int cnt = 0;

            int end = -1, start = -1;
            for (int i = n; i >= 0; --i)
            {
                if (v[i] == last)
                {
                    ++cnt;
                    if (cnt == k)
                    {
                        end = i;
                        break;
                    }
                }
            }

            cnt = 0;
            for (int i = 0; i < n; ++i)
            {
                if (v[0] == v[i])
                {
                    ++cnt;
                    if (cnt == k)
                    {
                        start = i;
                        break;
                    }
                }
            }

            if (start != -1 and end != -1 and start < end)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}