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
        vector<int> ev, od, vec(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> vec[i];
            if (vec[i] & 1)
            {
                od.push_back(vec[i]);
            }
            else
            {
                ev.push_back(vec[i]);
            }
        }

        sort(ev.begin(), ev.end());
        sort(od.begin(), od.end());

        if (od.empty() or ev.empty())
        {
            for (auto &ele : vec)
                cout << ele << ' ';
        }
        else
        {
            int i = 0, j = 0;
            int n = ev.size(), m = od.size();
            while (i < n and j < m)
            {
                if (ev[i] < od[j])
                {
                    cout << ev[i++] << ' ';
                }
                else
                {
                    cout << od[j++] << ' ';
                }
            }

            while (i < n)
                cout << ev[i++] << ' ';
            while (j < m)
                cout << od[j++] << ' ';
        }
        cout << endl;
    }
    return 0;
}