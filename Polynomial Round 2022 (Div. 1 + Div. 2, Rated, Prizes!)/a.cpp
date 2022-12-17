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

        string ans;
        stack<char> st;
        st.push(str[0]);

        for (int i = 1; i < n; ++i)
        {
            if (st.top() == '1' and str[i] == '1')
            {
                st.pop();
                st.push('0');
                ans += '-';
            }
            else if (st.top() == '1' and str[i] == '0')
            {
                ans += '+';
            }
            else if (st.top() == '0' and str[i] == '1')
            {
                st.pop();
                st.push('1');
                ans += '+';
            }
            else if (st.top() == '0' and str[i] == '0')
            {
                ans += '+';
            }
        }

        cout << ans << endl;
    }

    return 0;
}
