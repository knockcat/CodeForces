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
const ll maxn = 1e5 + 10;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine -> Success :D

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &ele : v)
            cin >> ele;

        string str;
        cin >> str;

        vector<int> pref(n, 0);
        pref[0] = v[0];

        for (int i = 1; i < n; ++i)
        {
            pref[i] = (pref[i - 1] + v[i]);
        }

        int f = -1, s = -1;

        for (int i = 0; i < n; ++i)
        {
            if (str[i] == 'L')
            {
                f = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; --i)
        {
            if (str[i] == 'R')
            {
                s = i;
                break;
            }
        }

        int ans = 0;

        if (f != -1 and s != -1)
        {
            ans += (pref[s] - (f - 1 >= 0 ? pref[f - 1] : 0));
            ++f, --s;
            while (f < s)
            {
                while (f < s and str[f] != 'L')
                    ++f;
                while (s > f and str[s] != 'R')
                    --s;
                if (f < s)
                {
                    ans += (pref[s] - (f - 1 >= 0 ? pref[f - 1] : 0));
                    ++f, --s;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}