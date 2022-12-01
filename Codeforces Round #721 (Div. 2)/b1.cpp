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
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (auto i : s)
        {
            if (i == '0')
                zero++;
            else
                one++;
        }
        if (zero == 1 || zero % 2 == 0)
            cout << "BOB"
                 << "\n";
        else
            cout << "ALICE"
                 << "\n";
    }
    return 0;
}
