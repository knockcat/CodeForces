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
const ll maxn = 1e5 + 10;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine -> Success :D

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;

        vector<int> v(n);
        for (auto &ele : v)
            cin >> ele;

        map<int, int> mp, last;

        for (int i = 0; i < n; ++i)
        {
            int j = i;
            int cnt = 0;

            while (j < n and v[i] == v[j])
            {
                ++j;
                ++cnt;
            }

            if (mp.find(v[i]) == mp.end())
                mp[v[i]] += cnt;
            else
            {
                int lst = last[v[i]];

                if ((i - lst) & 1)
                    mp[v[i]] += cnt;
                else
                    mp[v[i]] += (cnt - 1);
            }

            last[v[i]] = j - 1;
            i = j - 1;
        }

        for (int i = 1; i <= n; ++i)
        {
            cout << mp[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}