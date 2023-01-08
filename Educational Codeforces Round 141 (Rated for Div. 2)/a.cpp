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

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        int n;
        cin >> n;

        vector<int> v(n);
        unordered_map<int, int> mp;

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            ++mp[v[i]];
        }

        if (mp.size() == 1 or (n == 2 and v[0] == v[1]))
        {
            cout << "NO" << endl;
            continue;
        }
        if (n == 1)
            cout << "YES" << endl;

        sort(v.begin(), v.end(), greater<int>());

        cout << "YES" << endl;

        if (v[0] == v[1])
            swap(v[1], v[n - 1]);

        for (auto itr : v)
            cout << itr << " ";
        cout << endl;
    }

    return 0;
}
