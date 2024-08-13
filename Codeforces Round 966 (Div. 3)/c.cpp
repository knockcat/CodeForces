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

        vector<int> v(n);
        for (auto &ele : v)
            cin >> ele;

        int m;
        cin >> m;
        vector<string> vec(m);
        for (auto &ele : vec)
        {
            cin >> ele;
        }

        auto check = [&](string str)
        {
            if (n != str.size())
                return false;
            map<char, int> mp;
            map<int, char> mp2;

            for (int i = 0; i < n; ++i)
            {
                if (mp.find(str[i]) == mp.end())
                    mp.insert({str[i], v[i]});
                else
                {
                    if (mp[str[i]] != v[i])
                        return false;
                }
            }

            for (int i = 0; i < n; ++i)
            {
                if (mp2.find(v[i]) == mp2.end())
                {
                    mp2.insert({v[i], str[i]});
                }
                else
                {
                    if (mp2[v[i]] != str[i])
                        return false;
                }
            }

            return true;
        };

        for (auto &str : vec)
        {
            if (check(str))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}