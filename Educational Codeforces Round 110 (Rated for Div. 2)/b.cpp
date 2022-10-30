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
        // knockcat
        int n;
        cin >> n;
        vector<int> v(n), even, odd;

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] & 1)
                odd.push_back(v[i]);
            else
                even.push_back(v[i]);
        }

        int count = 0;

        vector<int> newv;
        for (auto itr : even)
            newv.push_back(itr);
        for (auto itr : odd)
            newv.push_back(itr);

        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (__gcd(newv[i], 2 * newv[j]) > 1)
                    ++count;
            }
        }

        cout << count << endl;
    }

    return 0;
}