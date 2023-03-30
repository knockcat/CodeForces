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

void helper(int l, int r, vector<int> &v, int &first, int &second, bool one, int &move, int prev)
{

    if (l <= r)
    {
        if (one)
        {
            int curr = 0;
            for (int i = l; i <= r; ++i)
            {
                if (curr <= prev)
                {
                    first += v[i];
                    curr += v[i];
                    ++l;
                }
                else
                    break;
            }
            ++move;
            helper(l, r, v, first, second, !one, move, curr);
        }
        else
        {
            int curr = 0;
            for (int i = r; i >= l; --i)
            {
                if (curr <= prev)
                {
                    second += v[i];
                    curr += v[i];
                    --r;
                }
                else
                    break;
            }
            ++move;
            helper(l, r, v, first, second, !one, move, curr);
        }
    }
}

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

        vector<int> v(n);
        for (auto &itr : v)
            cin >> itr;

        bool one = true;
        int first = 0, second = 0, move = 0;

        helper(0, n - 1, v, first, second, one, move, 0);

        cout << move << " " << first << " " << second << endl;
    }
    return 0;
}