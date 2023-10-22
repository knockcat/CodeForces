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

        int n, k;

        cin >> n >> k;

        string str;
        cin >> str;

        unordered_map<char, int> mp;

        for (auto &itr : str)
        {
            ++mp[itr];
        }

        int cnt = 0;
        int even = 0;
        int odd = 0;

        for (auto &itr : mp)
        {
            if (itr.second & 1)
            {
                ++cnt;
                odd += itr.second;
            }
            else
            {
                even += itr.second;
            }
        }

        int need = str.size() - k;

        if (need == 1)
            cout << "YES" << endl;
        else
        {
            if (k == 0)
            {
                if (str.size() % 2 == 0 and cnt == 0)
                    cout << "YES" << endl;
                else if (str.size() & 1 and cnt == 1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else if (need % 2 == 0)
            {
                if (k < cnt)
                    cout << "NO" << endl;
                else
                {
                    k -= cnt;

                    if (k & 1)
                        cout << "NO" << endl;
                    else
                        cout << "YES" << endl;
                }
            }
            else if (need & 1)
            {
                if (cnt == 0)
                {
                    if (k & 1)
                        cout << "YES" << endl;
                    else
                        cout << "NO" << endl;
                }
                else if (k < cnt - 1)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    k -= cnt - 1;

                    if (k & 1)
                        cout << "NO" << endl;
                    else
                        cout << "YES" << endl;
                }
            }
        }
    }
    return 0;
}