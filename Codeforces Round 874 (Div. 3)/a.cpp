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

        unordered_map<string, int> mp;

        for (int i = 0; i < n - 1; ++i)
        {
            string curr;
            curr.push_back(str[i]);
            curr.push_back(str[i + 1]);
            // cout<<curr<<endl;
            ++mp[curr];
        }

        cout << mp.size() << endl;
    }
    return 0;
}