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

        int odCnt = 0, evCnt = 0;

        vector<int> odd, even;

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];

            if (v[i] & 1)
                odd.push_back(v[i]);
            else
                even.push_back(v[i]);
        }

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        vector<int> here;

        for (int i = 0; i < n; ++i)
        {
            if (v[i] & 1)
                here.push_back(odd[odCnt++]);
            else
                here.push_back(even[evCnt++]);
        }

        vector<int> copy = here;

        sort(copy.begin(), copy.end());

        if (here == copy)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
};