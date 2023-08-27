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

        ll n;
        cin >> n;

        vector<ll> bits;
        ll temp = n;
        while (temp > 0)
        {
            bits.push_back(temp % 2);
            temp /= 2;
        }

        int size = bits.size();

        vector<int> ans;
        ans.push_back(n);

        ll val = 1;

        for (int i = 0; i < size - 1; ++i)
        {

            if (bits[i] == 1)
            {
                ans.push_back(n - val);
                n -= val;
            }

            val *= 2;
        }

        while (n != 1)
        {
            ans.push_back(n / 2);
            n /= 2;
        }

        cout << ans.size() << endl;
        for (auto &itr : ans)
            cout << itr << ' ';
        cout << endl;
    }
    return 0;
}