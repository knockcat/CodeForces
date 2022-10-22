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

    // while (tt--)
    // {
    // knockcat
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> visited(n+1);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        visited[v[i]] = i + 1;
    }

    for (int i = 1; i <= n; ++i)
        cout << visited[i] << " ";

    cout << '\n';

    // }

    return 0;
}