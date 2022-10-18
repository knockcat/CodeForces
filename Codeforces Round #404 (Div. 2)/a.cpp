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

    int n;
    cin >> n;

    vector<string> v(n);
    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (v[i] == "Tetrahedron")
            ans += 4;
        if (v[i] == "Cube")
            ans += 6;
        if (v[i] == "Octahedron")
            ans += 8;
        if (v[i] == "Dodecahedron")
            ans += 12;
        if (v[i] == "Icosahedron")
            ans += 20;
    }

    cout << ans << '\n';

    return 0;
}