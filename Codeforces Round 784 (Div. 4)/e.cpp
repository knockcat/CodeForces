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
        map<string, int> mp;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < 2; j++)
            {
                for (char c = 'a'; c <= 'k'; c++)
                {
                    if (s[j] == c)
                    {
                        continue;
                    }
                    string ns = s;
                    ns[j] = c;
                    ans += mp[ns];
                }
            }
            mp[s]++;
        }
        cout << ans << "\n";
    }
    return 0;
}