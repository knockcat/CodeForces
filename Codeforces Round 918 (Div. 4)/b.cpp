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

        vector<string> v(3);

        for (auto &itr : v)
            cin >> itr;

        char miss = '#';

        for (auto &itr : v)
        {
            bool one = 0, two = 0, three = 0;
            for (auto x : itr)
            {
                if (x == 'A')
                    one ^= 1;
                if (x == 'B')
                    two ^= 1;
                if (x == 'C')
                    three ^= 1;
            }

            if (!one)
                miss = 'A';
            if (!two)
                miss = 'B';
            if (!three)
                miss = 'C';
        }

        cout << miss << endl;
    }
    return 0;
}