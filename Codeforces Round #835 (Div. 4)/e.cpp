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

int count(vector<int> &v)
{
    int ok = 0, cnt = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] == 0)
            ok += cnt;
        else
            ++cnt;
    }
    return ok;
}
/*
int32_t main()
{
    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        // Knockcat
        int n;
        cin >> n;
        vector<int> v(n);
        bool ok = false;
        int pref = -1, last = -1;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; ++i)
        {
            if (v[i] == 0 and !ok)
            {
                pref = i, ok = true;
            }
            if (v[i] == 1)
                last = i;
        }

        int ans = count(v);
        int a = v[pref];
        int b = v[last];
        if (pref != -1)
        {
            v[pref] = 1;
            ans = max(ans, count(v));
            v[pref] = a;
        }
        if (last != -1)
        {
            v[last] = 0;
            ans = max(ans, count(v));
            v[last] = b;
        }
        cout << ans << endl;
    }
    return 0;
}*/

int32_t main()
{
    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        // Knockcat

        int n;
        cin >> n;
        int res = 0, cnt = 0;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        int zero = 0;

        for (int i = n - 1; i >= 0; --i)
        {
            if (v[i] == 0)
                ++zero;
            else
                res += zero;
        }
        int one = 0, curr = res;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] == 0)
                --zero;

            int here = curr;
            if (v[i] == 0)
            {
                here -= one;
                here += zero;
            }
            else
            {
                here += one;
                here -= zero;
            }
            if (v[i] == 1)
                ++one;

            res = max(res, here);
        }

        cout << res << endl;
    }
    return 0;
}