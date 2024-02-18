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

        ll n, m;
        cin >> n >> m;

        vector<int> v(n);
        for (auto &ele : v)
            cin >> ele;

        string str;
        cin >> str;

        vector<int> ans;

        int left = 0, right = n - 1;

        vector<pair<char, int>> here;

        for (auto &ch : str)
        {
            if (ch == 'L')
            {
                here.push_back({ch, v[left++]});
            }
            else
            {
                here.push_back({ch, v[right--]});
            }
            // cout << here.back().first << ' ' << here.back().second << ' ';
        }
        // cout << endl;

        reverse(here.begin(), here.end());

        int prod = here[0].second;
        ans.push_back(prod % m);

        for (int i = 1; i < n; ++i)
        {
            prod = (prod * here[i].second) % m;
            ans.push_back(prod % m);
        }

        reverse(ans.begin(), ans.end());

        for (auto &ele : ans)
            cout << ele << ' ';
        cout << endl;
    }
    return 0;
}