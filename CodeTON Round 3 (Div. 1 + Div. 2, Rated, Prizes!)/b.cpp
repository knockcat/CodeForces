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
        string str;
        cin >> str;

        int count1 = 0, count2 = 0, one = 0, zero = 0;
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < str.size(); ++i)
        {
            if (str[i] == '1')
            {
                ++one;
                ++count1;
                ans1 = max(ans1, count1);
            }
            else
                count1 = 0;
            if (str[i] == '0')
            {
                ++zero;
                ++count2;
                ans2 = max(ans2, count2);
            }
            else
                count2 = 0;
        }

        // cout<<ans1<<" "<<ans2<<" "<<one<<" "<<zero<<endl;
        cout << max({ans1 * ans1, ans2 * ans2, one * zero}) << endl;
    }
    return 0;
}
