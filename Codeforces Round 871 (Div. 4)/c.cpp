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

        vector<int> type1, type2, type3, type4;
        int n;
        cin >> n;

        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            string str;
            cin >> str;

            if (str == "01")
            {
                type1.push_back(x);
            }
            else if (str == "10")
            {
                type2.push_back(x);
            }
            else if (str == "00")
            {
                type3.push_back(x);
            }
            else if (str == "11")
            {
                type4.push_back(x);
            }
        }

        sort(type1.begin(), type1.end());
        sort(type2.begin(), type2.end());
        sort(type3.begin(), type3.end());
        sort(type4.begin(), type4.end());

        int ans = INT_MAX;

        if (type1.empty() and type2.empty() and type3.empty() and type4.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            bool ok = false;
            if (type1.size() >= 1 and type2.size() >= 1)
            {
                ans = min(ans, type1[0] + type2[0]);
                ok = true;
            }

            if (type4.size())
            {
                ans = min(ans, type4[0]);
                ok = true;
            }

            cout << (ok ? ans : -1) << endl;
        }
    }
    return 0;
}