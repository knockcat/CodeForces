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

        string str;
        cin >> str;

        int cnt = 0;

        map<char, int> mp, dup;

        for (auto itr : str)
            ++mp[itr];

        int maxi = 0;

        for (int i = 0; i < n / 2; ++i)
        {
            if (str[i] == str[n - i - 1])
            {
                cnt += 2;
                ++dup[str[i]];
            }
        }

        for (auto itr : mp)
        {
            maxi = max(maxi, itr.second);
        }

        int dupCnt = 0;

        for (auto itr : dup)
        {
            dupCnt = max(dupCnt, itr.second);
        }

        // cout << cnt << endl;

        // if (cnt == 0)
        // {
        //     cout << 0 << endl;
        //     continue;
        // }
        // else

        if (mp.size() == 1 or n & 1 or maxi > n / 2)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            // cout << cnt / 2 << endl;

            cnt /= 2;

            int rem = cnt - dupCnt;

            if (dupCnt > rem)
                cout << dupCnt << endl;
            else
            {
                if (cnt & 1)
                    cout << cnt / 2 + 1 << endl;
                else
                    cout << cnt / 2 << endl;
            }
        }
    }
    return 0;
}