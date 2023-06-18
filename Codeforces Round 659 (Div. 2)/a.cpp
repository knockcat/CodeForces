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

        int maxi = 0;

        for (auto &itr : v)
        {
            cin >> itr;
            maxi = max(itr, maxi);
        }

        string str(52, 'a');

        vector<string> ans;

        ans.push_back(str);

        for (int i = 0; i < n; ++i)
        {
            int need = v[i];

            string str = ans.back();
            string currstr = "";

            for (int j = 0; j < 55; ++j)
            {
                if (j < need)
                    currstr += str[j];
                else
                {
                    if (str[j] == 'a')
                        currstr += 'b';
                    else
                        currstr += 'a';
                }
            }

            ans.push_back(currstr);
        }

        for (auto itr : ans)
            cout << itr << endl;
    }
    return 0;
}