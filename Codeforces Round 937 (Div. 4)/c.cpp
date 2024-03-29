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

        string str;
        cin >> str;

        string hour = "";
        hour += str[0];
        hour += str[1];

        int h = stol(hour);

        bool ok = true;
        if (h < 12)
        {
            ok = true;
        }
        else
            ok = false;

        h %= 12;

        if (h == 0)
        {
            cout << "12:" << str.substr(3) << " ";
        }
        else
        {
            if (h / 10 == 0)
            {
                cout << "0" << h << ":" << str.substr(3) << " ";
            }
            else
            {
                cout << h << ":" << str.substr(3) << " ";
            }
        }

        cout << (ok ? "AM" : "PM") << endl;
    }
    return 0;
}