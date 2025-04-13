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

/*
Things have not went as I wanted and yes I am feeling maybe this is not meant for me (because of results) but still I will do this as,
I cannot given up.
Reaching here and still trying is also a milestone for me.
My journey has been incredible and I will surely improve.
It's just a matter of time and I am sure I am going to make it.

Till now show some resistance, focus on small goals and the big goals will take care of themselves.
knockcat this side...
*/

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        string p, s;
        cin >> p >> s;

        int n = p.size(), m = s.size();
        int i = 0, j = 0;
        bool ok = true;
        while (i < n and j < m)
        {
            int cnt = 1;
            int scnt = 1;
            while (i + 1 < n and p[i] == p[i + 1])
            {
                ++i;
                ++cnt;
            }
            while (j + 1 < m and s[j] == s[j + 1])
            {
                ++scnt;
                ++j;
            }
            // cout<<cnt<<' '<<scnt<<endl;
            if (p[i] != s[j])
                ok = false;
            if (scnt < cnt or scnt > 2 * cnt)
                ok = false;
            ++i, ++j;
        }
        if (i != n or j != m)
            ok = false;
        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}