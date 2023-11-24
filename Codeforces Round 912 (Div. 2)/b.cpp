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

// You better take more time but avoid penalties
// Look at Constraints

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
        vector<int> vec;
        vector<vector<int>> mat(n, vector<int>(n, 0));

        if (n == 1)
        {
            int x;
            cin >> x;
            cout << "YES" << endl;
            cout << x << endl;
            continue;
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                vector<int> bits(32, 0);
                for (int j = 0; j < n; ++j)
                {
                    int x;
                    cin >> x;
                    mat[i][j] = x;

                    if (i == j)
                        continue;

                    int idx = 0;
                    while (x > 0)
                    {
                        bits[idx++] += (x % 2);
                        x /= 2;
                    }
                }
                int curr = 0;

                for (int k = 0; k < 32; ++k)
                {
                    if (bits[k] == n - 1)
                        curr ^= (1 << k);
                }

                vec.push_back(curr);
            }

            bool ok = true;
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    if (i != j)
                    {
                        if (mat[i][j] != (vec[i] | vec[j]))
                            ok = false;
                    }
                }
            }

            if (ok)
            {
                cout << "YES" << endl;
                for (auto &itr : vec)
                    cout << itr << ' ';
                cout << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}