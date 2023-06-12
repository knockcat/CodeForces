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

        string s;

        int n;
        cin >> n;

        vector<int> v(n);

        for (auto &itr : v)
            cin >> itr;

        vector<int> a;

        int first = v[0];

        bool ok = false;

        for (int i = 0; i < n; ++i)
        {
            if (s.empty())
            {
                s.push_back('1');
                a.push_back(v[i]);
            }
            else
            {
                if (ok and a.back() <= v[i])
                {
                    if (first >= v[i])
                    {
                        a.push_back(v[i]);
                        s.push_back('1');
                        ok = true;
                    }
                    else
                    {
                        s.push_back('0');
                    }
                }
                else if (a.back() > v[i])
                {
                    // cout << "for j" << endl;
                    if (!ok and first >= v[i])
                    {
                        a.push_back(v[i]);
                        s.push_back('1');
                        ok = true;
                    }
                    else
                    {
                        s.push_back('0');
                    }
                }
                else if (a.back() <= v[i])
                {
                    // cout << "for i " << endl;
                    s.push_back('1');
                    a.push_back(v[i]);
                }
                else
                {
                    s.push_back('0');
                }
            }
        }

        cout << s << endl;
    }
    return 0;
}