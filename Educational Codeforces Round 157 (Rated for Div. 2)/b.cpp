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

        int n;
        cin >> n;

        vector<int> v(2 * n);

        for (auto &itr : v)
            cin >> itr;

        sort(v.begin(), v.end());

        // for(auto& itr : v)
        //     cout<<itr<<' ';
        // cout<<endl;

        vector<pair<int, int>> here;
        for (int i = 0; i < n; i++)
        {
            here.push_back({v[i], v[2 * n - i - 1]});
        }

        int ans = 0;

        for (int i = 1; i < here.size(); ++i)
        {
            ans += (abs(here[i].first - here[i - 1].first) + abs(here[i].second - here[i - 1].second));
        }

        cout << ans << endl;

        for (auto &itr : here)
            cout << itr.first << ' ' << itr.second << endl;
    }
    return 0;
}