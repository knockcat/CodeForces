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
const ll maxn = 1e5 + 10;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine -> Success :D

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        string str, text;
        cin >> str >> text;
        int n = str.size(), m = text.size();
        int k = 0;
        int last = -1;
        for (int i = 0; i < n; ++i)
        {
            if (k == m)
                break;
            if (str[i] == text[k])
            {
                ++k;
            }
            else if (str[i] == '?')
            {
                str[i] = text[k++];
            }
            last = i;
        }

        for (int i = last; i < str.size(); ++i)
        {
            if (str[i] == '?')
                str[i] = 'k';
        }

        if (k == m)
        {
            cout << "YES" << endl;
            cout << str << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}