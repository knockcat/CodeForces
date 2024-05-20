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

        map<char, char> mp;
        int n;
        cin >> n;
        string str;
        cin >> str;

        set<char> st;
        string ref;
        for (int i = 0; i < str.size(); i++)
        {
            if (!st.count(str[i]))
            {
                ref.push_back(str[i]);
                st.insert(str[i]);
            }
        }

        int j = ref.size() - 1;
        sort(ref.begin(), ref.end());

        for (int i = 0; i <= ref.size() / 2; ++i)
        {
            mp[ref[i]] = ref[j];
            mp[ref[j]] = ref[i];
            --j;
        }

        string ans;

        for (auto &ele : str)
        {
            ans += mp[ele];
        }

        cout << ans << endl;
    }
    return 0;
}