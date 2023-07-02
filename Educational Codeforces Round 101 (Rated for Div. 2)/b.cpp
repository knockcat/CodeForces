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

        vector<int> red(n);

        vector<int> pref1, pref2;

        int maxi1 = 0, maxi2 = 0;

        for (auto &itr : red)
        {
            cin >> itr;
            if (pref1.empty())
            {
                pref1.push_back(itr);
            }
            else
                pref1.push_back(itr + pref1.back());
            maxi1 = max(maxi1, pref1.back());
        }

        int m;
        cin >> m;

        vector<int> blue(m);

        for (auto &itr : blue)
        {
            cin >> itr;
            if (pref2.empty())
            {
                pref2.push_back(itr);
            }
            else
                pref2.push_back(itr + pref2.back());
            maxi2 = max(maxi2, pref2.back());
        }

        cout << maxi1 + maxi2 << endl;
    }
    return 0;
}