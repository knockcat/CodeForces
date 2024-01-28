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
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If you will be good at programming she will be yours

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n, k, m;
        cin >> n >> k >> m;

        string str;
        cin >> str;

        map<char, int> mp;

        set<char> st, have;

        int cnt = 0;

        for (int i = 0; i < k; ++i)
        {
            st.insert('a' + i);
        }

        function<bool(set<char>)> contains = [&](set<char> used)
        {
            for (auto &ele : st)
            {
                if (used.count(ele) == 0)
                    return false;
            }
            return true;
        };

        string ans;

        for (int i = 0; i < m; ++i)
        {
            have.insert(str[i]);

            if (contains(have))
            {
                ++cnt;
                ans += str[i];
                have.clear();
            }
        }

        if (cnt >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            char need = '#';
            for (int i = 0; i < k; ++i)
            {
                if (!have.count('a' + i))
                {
                    need = ('a' + i);
                    break;
                }
            }

            while (ans.size() != n)
                ans += need;

            cout << "NO" << endl;
            cout << ans << endl;
        }
    }
    return 0;
}