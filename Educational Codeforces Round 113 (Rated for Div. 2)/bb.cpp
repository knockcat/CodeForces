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

        int n;
        cin >> n;

        string str;
        cin >> str;

        int one = 0, two = 0;

        vector<int> track;

        set<int> st, used;

        for (int i = 0; i < n; ++i)
        {
            if (str[i] == '1')
            {
                ++one;
                st.insert(i);
            }
            else
            {
                ++two;
                used.insert(i);
                track.push_back(i);
            }
        }

        if (!track.empty())
            track.push_back(track[0]);

        vector<vector<char>> vp(n, vector<char>(n));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                if (i == j)
                    vp[i][j] = 'X';
                else
                {
                    if (st.count(i))
                        vp[i][j] = '=';
                    if (used.count(i))
                        vp[i][j] = '-';
                }
        }

        if (n == 2)
        {
            if (one == 2)
            {
                cout << "YES" << endl;
                cout << "X=" << endl;
                cout << "=X" << endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }
        else if (one == n)
        {
            cout << "YES" << endl;
        }
        else if (two <= 2)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;

            for (int i = 0; i < track.size() - 1; ++i)
            {
                vp[track[i]][track[i + 1]] = '+';
                vp[track[i + 1]][track[i]] = '-';
            }
        }

        if (st.size() == 1)
        {
            for (int i = 0; i < n; ++i)
            {
                if (*st.begin() != i)
                    vp[*st.begin()][i] = '+';
            }
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (vp[i][j] == '-')
                {
                    if (!st.count(j))
                        vp[j][i] = '+';
                }
                if (vp[i][j] == '=')
                    vp[j][i] = '=';
            }
        }

        for (auto &itr : vp)
        {
            for (auto &x : itr)
                cout << x;
            cout << endl;
        }
    }
    return 0;
}
