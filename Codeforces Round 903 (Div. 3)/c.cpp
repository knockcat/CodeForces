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

void transpose(vector<vector<char>> &A, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(A[i][j], A[j][i]);
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

        vector<vector<char>> v(n, vector<char>(n));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> v[i][j];
            }
        }

        vector<vector<char>> A = v;
        transpose(A, n);
        int cnt = 0;

        // for (auto &itr : v)
        // {
        //     for (auto &x : itr)
        //         cout << x << ' ';
        //     cout << endl;
        // }
        for (auto &itr : A)
        {
            reverse(itr.begin(), itr.end());
            // for (auto &x : itr)
            //     cout << x << ' ';
            // cout << endl;
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (v[i][j] != A[i][j])
                {
                    cnt += abs((int)v[i][j] - (int)(A[i][j]));
                }
            }
        }

        cout << cnt/2 << endl;
    }
    return 0;
}