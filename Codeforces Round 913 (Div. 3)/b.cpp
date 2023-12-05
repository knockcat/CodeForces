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

        string str;
        cin >> str;

        int n = str.size();

        vector<int> Caps, small;

        for (int i = 0; i < n; ++i)
        {
            if (str[i] >= 'a' and str[i] <= 'z' and str[i] != 'b')
                small.push_back(i);
            if (str[i] >= 'A' and str[i] <= 'Z' and str[i] != 'B')
                Caps.push_back(i);

            if (str.empty() and (str[i] == 'b' or str[i] == 'B'))
            {
                continue;
            }
            if (str[i] == 'B')
            {
                if (!Caps.empty())
                {
                    str[Caps.back()] = '#';
                    Caps.pop_back();
                }
            }
            if (str[i] == 'b')
            {
                if (!small.empty())
                {
                    str[small.back()] = '#';
                    small.pop_back();
                }
            }
        }

        for (auto &itr : str)
        {
            if (itr == '#' or itr == 'b' or itr == 'B')
                continue;
            cout << itr;
        }
        cout << endl;
    }
    return 0;
}