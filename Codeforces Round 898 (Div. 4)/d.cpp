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

        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        string newStr = str;

        int operation = 0;
        for (int i = 0; i < n; ++i)
        {
            if (str[i] == 'B')
            {
                ++operation;
                int j;
                bool ok = false;
                for (j = i; j < min(n, i + k); ++j)
                {
                    ok = true;
                    // cout<<"chala ";
                    if (str[j] == 'B')
                        str[j] = 'W';
                }
                // cout << str << endl;
                if (ok)
                    i = j - 1;
                else
                    i = j;
            }
        }

        int operation2 = 0;

        for (int i = n - 1; i >= 0; --i)
        {
            if (newStr[i] == 'B')
            {
                ++operation2;
                int j = i;
                bool ok = false;
                for (j = i; j < max(0ll, i - k); --j)
                {
                    ok = true;
                    // cout<<"chala ";
                    if (newStr[j] == 'B')
                        newStr[j] = 'W';
                }
                // cout << str << endl;

                if (ok)
                    i = j + 1;
                else
                    i = j;
            }
        }
        // cout<<str<<endl;
        cout << min(operation2, operation) << endl;
    }
    return 0;
}