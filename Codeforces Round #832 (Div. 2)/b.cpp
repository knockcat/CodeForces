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
        int end = 3 * n;

        if (n == 1)
        {
            cout << 1 << endl;
            cout << 1 << " " << 2 << endl;
        }
        else
        {
            string str;
            for (int i = 0; i < n; ++i)
                str += "BAN";
            cout << (n + 1) / 2 << endl;
            vector<pair<int, int>> vp;
            int i = 0, j = (3 * n) - 1;
            while (i < j)
            {
                if (str[i] == 'A' and str[j] == 'N')
                {
                    vp.push_back({i + 1, j + 1});
                    ++i, --j;
                }
                else if (str[i] != 'A')
                    ++i;
                else
                {
                    --j;
                }
            }
            for (auto itr : vp)
                cout << itr.first << " " << itr.second << endl;
        }
    }
    return 0;
}
