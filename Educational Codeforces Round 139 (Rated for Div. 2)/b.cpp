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

        int n;
        cin >> n;
        string str;
        cin >> str;
        unordered_map<string, int> mp;
        bool flag = false;
        for (int i = 0; i < n - 1; ++i)
        {
            string ok = "";
            ok += str[i];
            ok += str[i + 1];
            if (mp.find(ok) == mp.end())
            {
                mp[ok] = i;
            }
            else
            {
                if (i - mp[ok] >= 2)
                {
                    flag = true;
                    break;
                }
            }
        }

        // for (auto itr : mp)
        // {
        //     string ok = itr.first;

        //     if (itr.second > 1 and ok[0] != ok[1])
        //         flag = true;
        // }
        // // for (auto itr : mp)
        //     cout << itr.first << " " << itr.second << endl;

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
