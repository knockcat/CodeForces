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
        set<int> used;

        for (int i = 2; i * i <= n; ++i)
        {
            if (n % i == 0)
            {
                used.insert(i);
                n /= i;
                if (used.size() == 2)
                    break;
            }
        }

        if (used.size() < 2 or used.count(n) or n == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        used.insert(n);
        cout << "YES" << endl;
        for (auto itr : used)
            cout << itr << " ";
        cout << endl;
    }

    return 0;
}
