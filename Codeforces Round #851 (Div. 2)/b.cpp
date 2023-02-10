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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        string str = to_string(n);
        string first, second;

        bool ok = true;
        for (auto itr : str)
        {
            int curr = itr - '0';
            if (curr % 2 == 0)
            {
                first += to_string(curr / 2);
                second += to_string(curr / 2);
            }
            else
            {
                if (ok)
                {
                    first += to_string(curr / 2);
                    second += to_string(curr / 2 + 1);
                }
                else
                {
                    first += to_string(curr / 2 + 1);
                    second += to_string(curr / 2);
                }
                ok ^= 1;
            }
        }

        cout << stoi(first) << " " << stoi(second) << endl;
    }

    return 0;
}
