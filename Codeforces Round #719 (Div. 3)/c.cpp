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
        if (n == 1)
        {
            cout << "1\n";
        }
        else if (n == 2)
        {
            cout << "-1\n";
        }
        else if (n == 3)
        {
            cout << "2 9 7\n4 6 3\n1 8 5\n";
        }
        else
        {
            int k = 1;
            int l;
            if (n % 2 != 0)
            {
                l = (n / 2 + 1) * n + 1;
            }
            else
            {
                l = (n * n) / 2 + 1;
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (j % 2 == 0)
                    {
                        cout << k++ << " ";
                    }
                    else
                    {
                        cout << l++ << " ";
                    }
                }
                cout << "\n";
            }
        }
    }
    return 0;
}
