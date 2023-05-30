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

        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (auto &itr : a)
            cin >> itr;
        for (auto &itr : b)
            cin >> itr;

        int cnt = 1;

        map<int, int> mp, mp2;

        mp[a[0]] = 1;
        mp2[b[0]] = 1;

        for (int i = 1; i < n; ++i)
        {
            if (a[i] == a[i - 1])
            {
                ++cnt;
            }
            else
                cnt = 1;

            mp[a[i]] = max(mp[a[i]], cnt);
        }

        cnt = 1;

        for (int i = 1; i < n; ++i)
        {
            if (b[i] == b[i - 1])
            {
                ++cnt;
            }
            else
                cnt = 1;

            mp2[b[i]] = max(mp2[b[i]], cnt);
        }

        int ans = 0;

        for (auto itr : a)
        {
            int curr = mp[itr] + mp2[itr];
            ans = max(ans, curr);
        }
        for (auto itr : b)
        {
            int curr = mp[itr] + mp2[itr];
            ans = max(ans, curr);
        }

        cout << ans << endl;
    }
    return 0;
}