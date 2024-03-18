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
const ll maxn = 1e5 + 10;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine -> Success :D

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;

        vector<int> v(n);

        for (auto &ele : v)
        {
            cin >> ele;
        }

        if (n & 1)
            cout << "NO" << endl;
        else
        {
            set<int> have(v.begin(), v.end());

            sort(v.begin(), v.end());

            vector<int> ans;

            auto check = [&]()
            {
                if (ans.size() != n)
                    return false;
                for (int i = 1; i < n - 1; i += 2)
                {
                    if (ans[i] <= ans[i - 1] or ans[i] <= ans[i + 1])
                        return false;
                }
                return true;
            };

            int half = (n / 2);

            for (int i = 0; i < (n / 2); ++i)
            {
                ans.push_back(v[i]);
                ans.push_back(v[i + half]);
            }

            if (check())
            {
                cout << "YES" << endl;
                for (auto &ele : ans)
                    cout << ele << ' ';
                cout << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}