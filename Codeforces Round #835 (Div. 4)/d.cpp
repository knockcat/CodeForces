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
        set<int> s;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        bool one = true;
        if (s.size() == 1)
        {
            one = true;
        }
        else
        {
            for (int i = 0; i < n - 1; ++i)
            {
                if (v[i] < v[i + 1])
                {
                    while (true)
                    {
                        if (v[i + 1] >= v[i] and i < n - 1)
                            ++i;
                        else
                            break;
                    }

                    if (i == n - 1)
                    {
                        one = true;
                        break;
                    }
                    else
                    {
                        one = false;
                        break;
                    }
                }
            }
        }

        if (one)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}