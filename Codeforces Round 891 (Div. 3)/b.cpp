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

        string str;
        cin >> str;

        str = '0' + str;
        int n = str.size();
        int pos = n;

        for (int i = n - 1; i >= 0; --i)
        {
            if (str[i] >= '5')
            {
                ++str[i - 1];
                pos = i;
            }
        }

        for (int i = pos; i < n; ++i)
            str[i] = '0';

        if (str[0] == '0')
            str.erase(str.begin());

        cout << str << endl;
    }
    return 0;
}