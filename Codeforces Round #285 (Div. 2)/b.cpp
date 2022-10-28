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
    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat

    // }

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int Misha = max(3 * (a / 10), a - ((a / 250) * c));
    int Vasya = max(3 * (b / 10), b - ((b / 250) * d));

    if (Misha == Vasya)
        cout << "Tie" << '\n';
    else if (Misha > Vasya)
        cout << "Misha" << '\n';
    else
        cout << "Vasya" << '\n';

    return 0;
}