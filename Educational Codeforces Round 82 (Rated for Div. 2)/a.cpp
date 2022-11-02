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
        string str;
        cin >> str;

        vector<int> v;
        int ans = 0;
        for (int i = 0; i < str.size(); ++i)
        {
            if (str[i] == '1')
            {
                v.push_back(i + 1);
            }
        }
        for (int i = 1; i < v.size(); ++i)
        {
            int here = v[i] - v[i - 1];

            if (here > 1)
            {
                ans += here - 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}