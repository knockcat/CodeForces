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

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        string str;
        cin >> str;

        bool flag = true;
        for (int i = 0; i < n; ++i)
        {
            int a = v[i];
            char ch = str[i];

            for (int j = 0; j < n; ++j)
            {
                if (v[j] == a && str[j] != ch)
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}