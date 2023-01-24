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
long long cnt[2][2];
int32_t main()
{
    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        // Knockcat
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int alice, bob;
        alice = bob = a;
        int ans = a;
        int here;

        while (1)
        {
            if (b > 0 or c > 0 or d > 0)
            {
                if (alice and c)
                {
                    here = min(c, alice);
                    alice -= here;
                    bob += here;
                    c -= here;
                }
                else if (bob and b)
                {
                    here = min(b, bob);
                    bob -= here;
                    alice += here;
                    b -= here;
                }
                else if (alice and bob and d )
                {
                    here = min({d, alice, bob});
                    alice -= here;
                    bob -= here;
                    d -= here;
                }
                else
                {
                    break;
                }
                ans += here;
            }
            else
                break;
        }

        if (b != 0 or c != 0 or d != 0)
            ++ans;

        cout << ans << endl;
    }
    return 0;
}