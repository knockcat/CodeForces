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
long long cnt[2][2];
int32_t main()
{
    fast;
    // int tt;
    // cin >> tt;
    // while (tt--)
    // {
    //     // Knockcat
    // }

    int n;
    cin >> n;

    map<string, int> mp;

    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;

        if (mp.size() == 0)
        {
            mp.insert({str, 0});
            cout << "OK" << endl;
        }
        else if (mp.find(str) == mp.end())
        {
            mp.insert({str, 0});
            cout << "OK" << endl;
        }
        else
        {
            int add = mp[str];
            ++add;

            string concat = to_string(add);
            string newstr = str + concat;
            mp.insert({newstr, add});
            mp[str] = add;
            cout << newstr << endl;
        }
    }

    return 0;
}