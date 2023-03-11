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
        map<int, int> mp;
        for (auto &itr : v)
        {
            cin >> itr;
            ++mp[itr];
        }

        vector<int> copy = v;
        sort(copy.rbegin(), copy.rend());
        vector<int> large, small;
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            if (copy[i] > 0)
            {
                ++cnt;
            }
            else
                --cnt;
            large.push_back(cnt);
        }

        cnt = 0;
        for (auto itr : mp)
        {
            if (itr.first < 0)
            {
                if (mp[-1 * itr.first] > 0)
                {
                    ++cnt;
                    small.push_back(cnt);
                    --cnt;
                    small.push_back(cnt);
                    mp.erase(-1 * itr.first);
                }
            }
            else
            {
                ++cnt;
                small.push_back(cnt);
            }
        }

        for (auto itr : large)
            cout << itr << " ";
        cout << endl;
        for (auto itr : small)
            cout << itr << " ";
        cout << endl;
    }
    return 0;
}