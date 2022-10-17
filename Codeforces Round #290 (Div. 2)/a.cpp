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

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n, m;
    cin >> n >> m;
    string str, str1, str2;
    for (int i = 0; i < m; ++i)
        str.push_back('#');
    for (int i = 0; i < m; ++i)
    {
        str1.push_back('.');
        str2.push_back('.');
    }

    str1[0] = '#';
    str2[str2.size() - 1] = '#';

    bool flag = true;
    for (int i = 0; i < n; ++i)
    {
        if (!(i & 1))
        {
            cout << str << endl;
        }
        else
        {
            if (flag)
            {
                cout << str2 << endl;
                flag = false;
            }
            else
            {
                cout << str1 << endl;
                flag = true;
            }
        }
    }

    return 0;
}