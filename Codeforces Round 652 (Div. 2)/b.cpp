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

        // a solution which i cannot think of at this point.
        // i need practice ;)

        int n;
        cin >> n;

        string str;
        cin >> str;

        string rev = str;

        sort(rev.begin(), rev.end());

        if (rev == str)
            cout << str << endl;
        else
        {
            int cnt = 0, cnt2 = 0;

            string ans;

            for (int i = 0; i < n; ++i)
            {
                if (str[i] == '0')
                    ++cnt;
                else
                    break;
            }

            for (int i = n - 1; i >= 0; --i)
            {
                if (str[i] == '1')
                    ++cnt2;
                else
                    break;
            }

            for (int i = 0; i < cnt; ++i)
                ans += '0';
            ans += '0';
            for (int j = 0; j < cnt2; ++j)
                ans += '1';

            cout << ans << endl;
        }
    }
    return 0;
}