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
        unordered_map<int, int> mp;
        int maxi = -1;

        for (int i = 0; i < n; ++i)
        {
            int val;
            cin >> val;
            if (mp.find(val) == mp.end())
            {
                mp[val] = i + 1;
            }
            else
            {
                mp[val] = max(mp[val], i + 1);
            }
        }

        for (int i = 1; i <= 1000; ++i)
        {
            for (int j = 1; j <= 1000; ++j)
            {
                if (coprime(i, j) == 1 and mp.find(i) != mp.end() && mp.find(j) != mp.end())
                    maxi = max(maxi, mp[i] + mp[j]);
            }
        }

        cout << maxi << endl;
    }
    return 0;
}
