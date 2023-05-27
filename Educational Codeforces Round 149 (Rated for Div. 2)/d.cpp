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

        int n;

        cin >> n;

        string str;

        cin >> str;

        int one(0), two(0);

        vector<int> open, close;

        for (int i = 0; i < n; ++i)
        {
            if (str[i] == '(')
            {
                ++one;
                open.push_back(i);
            }
            else
            {
                ++two;
                close.push_back(i);
            }
        }

        if (one != two)
        {
            cout << -1 << endl;
            continue;
        }

        reverse(str.begin(), str.end());

        int curr = 0;
        bool ok = true;

        for (auto itr : str)
        {
            curr += (itr == '(');
            curr -= (itr == ')');

            ok &= (curr >= 0);
        }

        if (ok)
        {
            cout << 1 << endl;
            for (int i = 0; i < n; ++i)
                cout << 1 << ' ';
            cout << endl;
            continue;
        }

        reverse(str.begin(), str.end());

        vector<int> ans(n, 0);

        reverse(open.begin(), open.end());
        reverse(close.begin(), close.end());

        while (open.size())
        {
            int i = open.back();
            open.pop_back();

            while (close.size() and close.back() < i)
                close.pop_back();

            if (!close.size())
                break;

            int j = close.back();
            ans[i] = ans[j] = 1;

            close.pop_back();
        }

        int maxi = *max_element(ans.begin(), ans.end()) + 1;

        for (auto &itr : ans)
        {
            if (itr == 0)
            {
                itr = maxi;
            }
        }

        cout << *max_element(ans.begin(), ans.end()) << endl;
        for (auto itr : ans)
            cout << itr << ' ';
        cout << endl;
    }
    return 0;
}
