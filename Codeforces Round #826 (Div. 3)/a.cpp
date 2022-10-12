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
        // knockcat
        string str1, str2;
        cin >> str1 >> str2;

        int s = -1, l = 1, m = 0, a = 1, b = 1;

        for (auto itr : str1)
        {
            if (itr == 'X')
                a *= 2;
            if (itr == 'S')
                a *= s;
            if (itr == 'L')
                a *= l;
            if (itr == 'M')
                a *= 0;
        }
        for (auto itr : str2)
        {
            if (itr == 'X')
                b *= 2;
            if (itr == 'S')
                b *= s;
            if (itr == 'L')
                b *= l;
            if (itr == 'M')
                b *= 0;
        }

        if (a < b)
            cout << "<" << endl;
        if (a == b)
            cout << "=" << endl;
        if (a > b)
            cout << ">" << endl;
    }
    return 0;
}