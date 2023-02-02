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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        priority_queue<int, vector<int>, greater<int>> pq(v.begin(), v.end());

        if (pq.size() == 1)
            cout << "YES" << endl;
        else
        {

            bool ok = true;
            while (pq.size() > 1)
            {
                int a = pq.top();
                pq.pop();
                int b = pq.top();

                if (abs(a - b) <= 1)
                    continue;
                else
                {
                    ok = false;
                    break;
                }
            }

            cout << (ok ? "YES" : "NO") << endl;
        }
    }

    return 0;
}