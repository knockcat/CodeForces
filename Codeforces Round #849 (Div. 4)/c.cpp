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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        int i = 0, j = str.size() - 1;

        while (i < j)
        {
            if (str[i] != str[j])
            {
                ++i, --j;
            }
            else
                break;
        }

        cout << j - i + 1 << endl;
    }

    return 0;
}