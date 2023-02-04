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
    // ll tt;
    // cin >> tt;
    // while (tt--)
    // {
    // }

    int n;
    cin >> n;

    vector<int> v(n), ev, odd;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (v[i] & 1)
            odd.push_back(i);
        else
            ev.push_back(i);
    }

    if (ev.size() == 1)
        cout << ev[0]+1 << endl;
    if (odd.size() == 1)
        cout << odd[0]+1 << endl;

    return 0;
}
