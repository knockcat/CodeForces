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

        vector<int> v(4);

        cin >> v[0] >> v[1] >> v[2] >> v[3];

        vector<int> one = {v[0], v[1], v[2], v[3]};
        vector<int> two = {v[0], v[1], v[3], v[2]};
        vector<int> three = {v[1], v[0], v[2], v[3]};
        vector<int> four = {v[1], v[0], v[3], v[2]};

        auto check = [&](vector<int> have)
        {
            int one = 0, two = 0;
            if (have[0] > have[2])
                ++one;
            if (have[2] > have[0])
                ++two;
            if (have[1] > have[3])
                ++one;
            if (have[3] > have[1])
                ++two;

            return one > two;
        };

        int ans = 0;

        ans += check(one);
        ans += check(two);
        ans += check(three);
        ans += check(four);

        cout << ans << endl;
    }
    return 0;
}