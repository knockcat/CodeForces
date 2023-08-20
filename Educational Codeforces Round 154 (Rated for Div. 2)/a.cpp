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

        int prime = 17;

        bool one = false, two = false;

        for (int i = 0; i < str.size(); ++i)
        {
            if (str[i] == '1')
            {
                one = true;
                break;
            }
            else if (str[i] == '7')
            {
                two = true;
                break;
            }
        }

        if (one)
            cout << 17 << endl;
        else
            cout << 71 << endl;
    }
    return 0;
}