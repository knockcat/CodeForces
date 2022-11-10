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
        string s;
        cin >> s;

        map<char, char> converse;
        converse['R'] = 'B';
        converse['B'] = 'R';

        string ans = "";

        for (int i = 0; i < n; ++i)
        {
            while (i < n and s[i] == '?')
                ++i;

            if (i == n)
                break;

            if ((i - ans.size()) % 2)
            {
                char cons = s[i];
                for (int j = ans.size(); j <= i; ++j)
                {
                    ans += converse[cons];
                    cons = converse[cons];
                }
            }
            else
            {
                char cons = converse[s[i]];
                for (int j = ans.size(); j <= i; ++j)
                {
                    ans += converse[cons];
                    cons = converse[cons];
                }
            }
        }
        if (ans.size() == 0)
        {
            char m = 'B';
            for (int i = 0; i < n; ++i)
            {
                ans += m;
                m = converse[m];
            }
        }

        while (ans.size() < n)
        {
            int last = ans.size();
            ans += converse[ans[last - 1]];
        }

        cout << ans << endl;
    }

    return 0;
}
