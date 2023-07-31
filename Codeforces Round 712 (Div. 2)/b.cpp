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

        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            int zero = 0, one = 0;
            int j = 0;

            vector<pair<int, int>> here;

            for (int i = 0; i < n; ++i)
            {
                if (a[i] == '0')
                    ++zero;
                else
                    ++one;

                if (zero == one)
                {
                    here.push_back({j, i});
                    j = i + 1;
                }
            }

            for (int i = 0; i < here.size(); ++i)
            {
                int start = here[i].first;
                int end = here[i].second;

                if (a[start] == b[start])
                    continue;
                else
                {
                    for (int i = start; i <= end; ++i)
                    {
                        if (a[i] == '0')
                            a[i] = '1';
                        else
                            a[i] = '0';
                    }
                }
            }
            if (a == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}