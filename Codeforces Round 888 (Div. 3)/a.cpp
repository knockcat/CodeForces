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

        int n, m, k, h;
        cin >> n >> m >> k >> h;

        vector<int> heights(n);

        for (auto &itr : heights)
            cin >> itr;

        set<int> st;

        for (int i = 0; i < m; ++i)
            st.insert(i * k);

        int ans = 0, cnt = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(heights[i] != h and st.find(abs(heights[i] - h)) != st.end())
            {
                // cout<<heights[i]<<" ";
                ++cnt;
            }
        }
        // cout<<endl;

        cout<<cnt<<endl;
        
    }
    return 0;
}