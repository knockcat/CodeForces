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

        int n, m;
        cin >> n >> m;

        vector<vector<int>> mat(2, vector<int>(m));

        for (int i = 0; i < 1; i += 2)
        {
            mat[i][0] = 1;
            mat[i][1] = 0;
            mat[i + 1][0] = 0;

            for (int j = 1; j < m; ++j)
            {
                int left = mat[i][j - 1];

                if (left == mat[i][j])
                {
                    mat[i + 1][j] = left ^ 1;
                    if (j + 1 < m)
                        mat[i][j + 1] = left ^ 1;
                }
                else
                {
                    if (j + 1 < m)
                        mat[i][j + 1] = mat[i][j];
                    mat[i + 1][j] = left;
                }
                // cout<<mat[i][j]<<' ';
            } // cout<<endl;
        }
        string str;
        while (str.size() < 55)
        {
            str += "0110";
        }
        // cout << str << endl;
        for (int i = 0; i < n; ++i)
        {
            for (auto &itr : mat[(str[i] - '0')])
                cout << itr << ' ';
            cout << endl;
        }
    }
    return 0;
}