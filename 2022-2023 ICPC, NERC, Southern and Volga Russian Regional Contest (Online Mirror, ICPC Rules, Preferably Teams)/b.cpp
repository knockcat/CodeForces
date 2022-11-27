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
        string str;
        cin >> str;
        bool one = true;
        bool ok = true;

        for (int i = 0; i < n; ++i)
        {
            for (int j = i; j < n; ++j)
            {
                if (ok)
                {
                    if (str[i] == str[j])
                    {
                        ok = false;
                        break;
                    }
                }
                else
                {
                    if ( j+1 < n and str[i] == str[j + 1])
                    {
                        ok = true;
                        i += 1;
                        break;
                    }
                    else
                    {
                        one = false;
                        break;
                    }
                }
            }
            if (!one)
                break;
        }

        if (one)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
