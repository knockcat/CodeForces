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

        string str;
        cin >> str;

        int n = str.size();

        if (str == "()")
        {
            cout << "NO" << endl;
            continue;
        }

        string here = "";

        for (int i = 0; i < n; ++i)
            here += '(';
        for (int i = 0; i < n; ++i)
            here += ')';

        string temp;
        for (int i = 0; i < n; ++i)
            temp += "()";

        cout << "YES" << endl;
        if (temp.find(str) == string::npos)
            cout << temp;
        else
            cout << here;
        cout << endl;
    }
    return 0;
}