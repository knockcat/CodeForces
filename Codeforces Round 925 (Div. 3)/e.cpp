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

// If I'll be good at programming she will be mine

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n, m;
        cin >> n >> m;

        vector<int> v(n);
        for (auto &ele : v)
            cin >> ele;

        vector<int> zeroes;

        for (auto &ele : v)
        {
            int num = ele;
            int cnt = 0, dig = 0;
            while (num % 10 == 0)
            {
                ++cnt;
                num /= 10;
            }
            while (num > 0)
            {
                ++dig;
                num /= 10;
            }

            m -= dig;
            zeroes.push_back(cnt);
        }

        sort(zeroes.rbegin(), zeroes.rend());
        for (int i = 1; i < zeroes.size(); i += 2)
        {
            m -= zeroes[i];
        }

        cout << (m < 0 ? "Sasha" : "Anna") << endl;
    }
    return 0;
}