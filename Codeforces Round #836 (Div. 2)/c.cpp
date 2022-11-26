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
        int n, x;
        cin >> n >> x;

        if (n == 2)
        {
            cout << x << " " << 1 << endl;
        }
        else
        {
            set<int> used;
            vector<int> v(n, -1);
            bool ok = true;

            used.insert(x);
            used.insert(1);
            v[0] = x;
            v[n - 1] = 1;

            for (int i = 2; i < n; ++i)
            {
                for (int j = i; j <= n; j += i)
                {
                    if (used.find(j) == used.end() and i == j)
                    {
                        v[i - 1] = j;
                        used.insert(j);
                        break;
                    }
                    else if (used.find(j) == used.end() and (n % j) == 0)
                    {
                        v[i - 1] = j;
                        used.insert(j);
                        break;
                    }
                }
                if (v[i - 1] == -1)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                for (auto itr : v)
                    cout << itr << " ";
                cout << endl;
            }
            else
                cout << -1 << endl;
        }
    }
    return 0;
}