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

        int n, m, x;
        cin >> n >> m >> x;

        vector<pair<int, char>> vp;

        int dist;
        char ch;

        for (int i = 0; i < m; ++i)
        {
            cin >> dist >> ch;
            vp.push_back({dist, ch});
        }

        set<int> have, ans;

        x %= n;

        have.insert(x);

        for (int i = 0; i < m; ++i)
        {
            int dist = vp[i].first;
            char dir = vp[i].second;

            set<int> curr;

            if (dir == '0')
            {
                for (auto &ele : have)
                {
                    ll nxtDist = (ele + dist) % n;
                    curr.insert(nxtDist);
                }
            }
            else if (dir == '1')
            {
                for (auto &ele : have)
                {
                    ll nxtDist = (ele - dist) % n;
                    if (nxtDist < 0)
                        nxtDist += n;
                    curr.insert(nxtDist);
                }
            }
            else
            {
                for (auto &ele : have)
                {
                    ll nxtDist = (ele + dist) % n;
                    curr.insert(nxtDist);
                    ll nxtDistAnti = (ele - dist) % n;
                    if (nxtDistAnti < 0)
                        nxtDistAnti += n;
                    curr.insert(nxtDistAnti);
                }
            }

            have = curr;
        }

        cout << (int)have.size() << endl;
        for (auto &ele : have)
        {
            if (ele == 0)
                ans.insert(n);
            else
                ans.insert(ele);
        }

        for (auto &ele : ans)
            cout << ele << ' ';
        cout << endl;
    }
    return 0;
}