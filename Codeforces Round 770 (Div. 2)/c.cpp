// JAI SHREE RAM
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
const ll eps = -1e9;
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

        int n, k;
        cin >> n >> k;

        if (k == 1)
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n; ++i)
                cout << i << endl;
        }

        else
        {

            bool flag = true;
            int ev = 2, odd = 1;
            vector<int> v;
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < k; ++j)
                {
                    if (flag)
                    {
                        v.push_back(ev);
                        ev += 2;
                    }
                    else
                    {
                        v.push_back(odd);
                        odd += 2;
                    }
                }
                flag ^= 1;
            }

            if (odd - 2 > (n * k) or ev - 2 > (n * k))
                cout << "NO" << endl;
            else
            {
                cout << "YES" << endl;
                int t = 0;
                for (int i = 0; i < v.size(); ++i)
                {
                    cout << v[i] << ' ';
                    ++t;
                    if (t == k)
                    {
                        t = 0;
                        cout << endl;
                    }
                }
            }
        }
    }
    return 0;
}