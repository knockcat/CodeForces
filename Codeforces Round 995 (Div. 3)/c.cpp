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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(m), know(k);
        for (auto &ele : v)
            cin >> ele;
        ll sum = 0, tot = (n * (n + 1)) / 2;
        for (auto &ele : know)
        {
            cin >> ele;
            sum += ele;
        }

        if (k == n)
        {
            string ans(m, '1');
            cout << ans << endl;
        }
        else if (k < n - 1)
        {
            string ans(m, '0');
            cout << ans << endl;
        }
        else
        {
            ll dont = tot - sum;
            string str;
            for (auto &ele : v)
            {
                if (dont == ele)
                    str += '1';
                else
                    str += '0';
            }
            cout << str << endl;
        }
    }
    return 0;
}