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

        int a, b, c;
        cin >> a >> b >> c;

        vector<int> v(5);

        for (auto &itr : v)
            cin >> itr;

        int canComeinA = min(a, v[0]);
        v[0] -= canComeinA;
        a -= canComeinA;

        int canComeinB = min(b, v[1]);
        v[1] -= canComeinB;
        b -= canComeinB;

        int canComeinC = min(c, v[2]);
        v[2] -= canComeinC;
        c -= canComeinC;

        // type 4 that can accomadate in 1

        int accomadateOfTypeFour = min(a, v[3]);
        v[3] -= accomadateOfTypeFour;
        a -= accomadateOfTypeFour;

        // type 5 that can accomadate in 2

        int accomadateofTypeFive = min(b, v[4]);
        v[4] -= accomadateofTypeFive;
        b -= accomadateofTypeFive;

        int rem4And5 = v[3] + v[4];

        if (rem4And5 <= c)
            v[3] = v[4] = 0;

        int sum = 0;
        for (auto &itr : v)
            sum += itr;

        cout << (sum == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}