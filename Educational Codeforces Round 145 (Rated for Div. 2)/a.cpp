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

        set<char> st;
        string str;
        cin >> str;

        map<int, int> mp;
        for (auto itr : str)
            ++mp[itr];

        if (mp.size() == 1)
            cout << -1 << endl;
        else
        {
            if (mp.size() == 4 or mp.size() == 3)
                cout << 4 << endl;
            else
            {
                bool ok = false;
                for (auto itr : mp)
                {
                    if (itr.second == 3)
                    {
                        ok = true;
                        break;
                    }
                }

                if (ok)
                    cout << 6 << endl;
                else
                    cout << 4 << endl;
            }
        }
    }
    return 0;
}