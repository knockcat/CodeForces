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

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

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
        int a = 0, b = 0;
        for (int &e : v)
        {
            cin >> e;
            if (e % 2 == 0)
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if (a % 2 != b % 2)
        {
            cout << "NO\n";
        }
        else
        {
            bool flag = false;
            if (a % 2 == 0)
            {
                cout << "YES\n";
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        if (v[i] % 2 != v[j] % 2 && abs(v[i] - v[j]) == 1)
                        {
                            flag = true;
                        }
                    }
                }
                cout << (flag ? "YES" : "NO") << endl;
            }
        }
    }
    return 0;
}