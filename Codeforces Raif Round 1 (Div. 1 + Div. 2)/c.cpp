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
        string str;
        cin >> str;

        stack<char> st;

        for (int i = 0; i < str.size(); ++i)
        {
            if (st.empty())
                st.push(str[i]);
            else if (st.top() == 'A' and str[i] == 'B' or st.top() == 'B' and str[i] == 'B')
                st.pop();
            else
                st.push(str[i]);
        }

        cout << st.size() << endl;
    }
    return 0;
}
