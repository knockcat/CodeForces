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
        // Knockcat
        int n, a, b;
        cin >> n >> a >> b;
        bool one = false;
        if (n == a and n == b)
            one = true;
        else
        {
            if (a + b > n or a + b + 1 >= n)
                one = false;
            else
                one = true;
        }

        if (one)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}