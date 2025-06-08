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

        int n;
        cin >> n;
        map<int, set<int>> mp;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            mp[v[i]].insert(i);
        }
        int ans = 1;
        if (mp[v[0]].size() == 1)
        {
            cout << 1 << endl;
            continue;
        }
        int nxtIdx = *mp[v[0]].upper_bound(0);
        int start = 1;
        bool ok = false;
        int maxNxt = nxtIdx;
        while (nxtIdx < n)
        {
            ++ans;
            // cout<<"while"<<endl;
            // cout<<maxNxt<<endl;
            for (int j = start; j <= nxtIdx; ++j)
            {
                auto it = mp[v[j]].upper_bound(j);
                int nxt = -1;
                if(it == mp[v[j]].end())
                {
                    ok = true;
                    break;
                }
                else{
                    nxt = *it;
                }
                // cout<<v[j]<<' '<<nxt<<endl;
                // if (nxt == n)
                // {
                //     ok = true;
                //     break;
                // }
                maxNxt = max(maxNxt, nxt);
                // cout<<"HI"<<endl;
            }
            if(ok) break;
            start = nxtIdx+1;
            nxtIdx = maxNxt;
            // cout<<start<<' '<<nxtIdx<<endl;
        }

        cout << ans << endl;
    }
    return 0;
}