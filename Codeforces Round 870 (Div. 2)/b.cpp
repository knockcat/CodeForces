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

bool isPal(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
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
        int maxi = 0;

        vector<int> v(n);
        for (auto &itr : v)
        {
            cin >> itr;
            maxi = max(maxi, itr);
        }

        ll diff = 0, ans = 0;

        for (int i = 0; i < n / 2; ++i)
        {
            diff = abs(v[i] - v[n - i - 1]);

            if (diff == 0)
                continue;

            ans = (i == 0 ? diff : gcd(ans, diff));
        }

        cout << ans << endl;
    }
    return 0;
}