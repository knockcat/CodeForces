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

// You better take more time but avoid penalties
// Look at Constraints

// If you will be good at programming she will be yours

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

        string res;

        unordered_set<char> vow, cons;

        vow.insert('a');
        vow.insert('e');
        cons.insert('b');
        cons.insert('c');
        cons.insert('d');

        for (int i = 0; i < n; ++i)
        {
            if (vow.count(str[i]))
            {
                if (i + 2 < n and cons.count(str[i + 2]) or i + 1 == n - 1)
                {
                    res += str[i];
                    res += str[i + 1];
                    res += '.';
                    ++i;
                }
                else
                {
                    res += str[i];
                    res += '.';
                }
            }
            else
                res += str[i];
        }

        if (!res.empty() and res.back() == '.')
            res.pop_back();
        cout << res << endl;
    }
    return 0;
}