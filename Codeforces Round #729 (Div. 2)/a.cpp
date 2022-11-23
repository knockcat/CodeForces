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
        vector<int> v(2 * n), even, odd;
        for (int i = 0; i < 2 * n; ++i)
        {
            cin >> v[i];
            if (v[i] & 1)
                odd.push_back(v[i]);
            else
                even.push_back(v[i]);
        }

        if (even.size() == odd.size())
            cout << "Yes"
                 << "\n";
        else
            cout << "No"
                 << "\n";
    }
    return 0;
}