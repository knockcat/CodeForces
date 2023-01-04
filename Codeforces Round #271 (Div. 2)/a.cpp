
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

    string a = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char move;
    cin >> move;

    string str;
    cin >> str;

    for (auto itr : str)
    {
        if (move == 'R')
        {
            cout << a[a.find(itr) - 1];
        }
        else
        {
            cout << a[a.find(itr) + 1];
        }
    }

    cout << endl;
    return 0;
}
