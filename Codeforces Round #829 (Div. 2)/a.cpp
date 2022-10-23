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

        vector<char> v(n);
        map<char, int> mp;

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            ++mp[v[i]];

            if (v[i] == 'A' && mp['Q'])
            {
                --mp['Q'];
                --mp['A'];
            }

            if (mp['A'] > 0 && mp['Q'] == 0)
            {
                mp['A'] = 0;
            }
        }

        // cout << mp['Q'] << " " << mp['A'] << endl;
        if (mp['Q'] == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}