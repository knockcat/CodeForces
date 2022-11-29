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
        // Knockcat
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        int idx = -1;
        sort(v.begin(), v.end());
        int min = 1e9;
        for (int i = 1; i < n; ++i)
        {
            if (v[i] - v[i - 1] < min)
            {
                idx = i;
                min = v[i] - v[i - 1];
            }
        }

        vector<int> big, small;
        for (int i = 0; i < n; ++i)
        {
            if (idx == i or idx - 1 == i)
                continue;
            if (v[i] > v[i - 1])
                big.push_back(v[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            if (idx == i or idx - 1 == i)
                continue;
            if (v[i] <= v[i - 1])
                small.push_back(v[i]);
        }

        cout << v[idx] << " ";
        for (auto itr : big)
            cout << itr << " ";
        for (auto itr : small)
            cout << itr << " ";
        cout << v[idx - 1] << endl;
    }
    return 0;
}
