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
        set<string> s;
        // for (int i = 0; i < n - 1; ++i)
        // {
        //     string curr = str.substr(0, i) + str.substr(i + 2);
        //     s.insert(curr);
        // }

        // cout << s.size() << endl;

        int res = 1;

        for (int i = 1; i < n; i++)
        {
            if ((i + 1 < n) and str[i - 1] != str[i + 1])
                res++;
            else if ((i + 1 < n) and str[i - 1] == str[i + 1])
            {
                continue;
            }
        }

        cout << res << endl;
    }
    return 0;
}