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
        // Knockcat

        int n;
        cin >> n;

        string str;
        cin >> str;
        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            vector<int> v(10, 0);
            int distinct = 0;
            for (int j = i; j <= i + 99 and j < n; ++j)
            {
                if (v[str[j] - '0'] == 0)
                {
                    ++distinct;
                }
                ++v[str[j] - '0'];
                if (*max_element(v.begin(), v.end()) <= distinct)
                    ++ans;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
