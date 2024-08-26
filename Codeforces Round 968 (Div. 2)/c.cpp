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

        priority_queue<pair<int, char>> pq;
        map<char, int> mp;

        int n;
        cin >> n;
        string str;
        cin >> str;

        for (auto &ch : str)
            ++mp[ch];

        for (auto &[f, e] : mp)
            pq.push({e, f});

        string ans;
        while (pq.size() >= 2)
        {
            auto cur1 = pq.top();
            pq.pop();
            if (cur1.second != ans.back() or ans.empty())
            {
                --cur1.first;
                ans += cur1.second;
            }
            else
            {
                auto cur2 = pq.top();
                pq.pop();
                --cur2.first;
                ans += cur2.second;
                if (cur2.first)
                    pq.push({cur2.first, cur2.second});
            }
            if (cur1.first)
                pq.push({cur1.first, cur1.second});
        }

        while (!pq.empty())
        {
            int sz = pq.top().first;
            while (sz--)
                ans += pq.top().second;
            pq.pop();
        }

        cout << ans << endl;
    }
    return 0;
}