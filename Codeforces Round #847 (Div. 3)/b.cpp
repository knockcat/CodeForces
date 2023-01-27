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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        // Knockcat

        int n, s, r;
        cin >> n >> s >> r;

        int var = 1;
        int remi = n - 1;

        vector<int> v;

        int val = r / remi;
        int rem = r % remi;

        for (int i = 0; i < n - 1; ++i)
            v.push_back(val);

        if (rem != 0)
        {
            for (int i = 0; i < n; ++i)
            {
                if (rem == 0)
                    break;
                rem -= 1;
                v[i] += 1;
            }
        }

        cout << abs(s - r) << " ";
        for (auto itr : v)
            cout << itr << " ";
        cout << endl;
    }
    return 0;
}