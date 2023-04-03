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

int p[100005];

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n, a, b;
        cin >> n >> a >> b;

        set<int> st;
        ll sol = 0, ans = 2e18;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (st.find(x) == st.end())
                st.insert(x);
            else
                sol += a;
        }
        int c = 0;
        for (auto x : st)
            p[++c] = x;
        for (int i = 1; i <= c; i++)
        {
            ans = min(ans, 1LL * (p[i] - i) * b + 1LL * (c - i) * a);
        }
        ans = min(ans, 1LL * c * a + b);
        cout << ans + sol << endl;
    }
    return 0;
}