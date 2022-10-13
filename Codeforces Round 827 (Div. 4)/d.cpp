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

bool coprime(int a, int b)
{
    return (__gcd(a, b) == 1);
}

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
        int maxi = -1;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (coprime(v[i], v[j]))
                {
                    maxi = max(maxi, i + 1 + j + 1);
                }
            }
        }

        cout << maxi << endl;
    }
    return 0;
}