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

        int n;
        cin >> n;
        vector<int> v(n);

        map<int, int> mp;

        for (auto &itr : v)
        {
            cin >> itr;
            ++mp[itr];
        }

        if (mp.size() == 1)
            cout << -1 << endl;
        else
        {
            sort(v.begin(), v.end());

            int a = v[0];
            vector<int> first, second;
            for (int i = 0; i < n; ++i)
            {
                if (v[i] == a)
                    first.push_back(v[i]);
                else
                    second.push_back(v[i]);
            }

            cout << first.size() << ' ' << second.size() << endl;

            for (auto itr : first)
                cout << itr << ' ';
            cout << endl;
            for (auto itr : second)
                cout << itr << ' ';
            cout << endl;
        }
    }
    return 0;
}