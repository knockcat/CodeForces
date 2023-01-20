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

    vector<int> v;
    int x;
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        sum += x;
        v.push_back(sum);
    }
    int m;
    cin >> m;

    cout << endl;
    for (int i = 0; i < m; ++i)
    {
        cin >> x;

        cout << lower_bound(v.begin(), v.end(), x) - v.begin() + 1 << endl;
    }

    return 0;
}
