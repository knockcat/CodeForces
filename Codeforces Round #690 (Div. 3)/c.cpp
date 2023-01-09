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

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        int n;
        cin >> n;

        if (n <= 9)
        {
            cout << n << endl;
            continue;
        }

        int take = 9;
        string str = "";
        int sum = 0, num = n;
        while (num > 0)
        {
            if (take == 0)
                break;
            if ((num - take) >= 0)
            {
                num -= take;
                sum += take;
                str += to_string(take);
            }

            --take;
        }
        reverse(str.begin(), str.end());
        if (sum == n)
            cout << str << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
