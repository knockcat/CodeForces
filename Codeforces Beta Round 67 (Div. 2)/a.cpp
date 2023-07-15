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

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    ll a, b;
    cin >> a >> b;

    ll sum = a + b;

    vector<int> v1, v2, v3;

    while (a > 0)
    {
        ll cur = a % 10;
        if (cur != 0)
            v1.push_back(cur);
        a /= 10;
    }

    while (b > 0)
    {
        ll cur = b % 10;
        if (cur != 0)
            v2.push_back(cur);
        b /= 10;
    }

    while (sum > 0)
    {
        ll cur = sum % 10;
        if (cur != 0)
            v3.push_back(cur);
        sum /= 10;
    }

    reverse(v1.begin(), v1.end());
    reverse(v2.begin(), v2.end());
    reverse(v3.begin(), v3.end());

    ll one = 0, two = 0, three = 0;

    for (int i = 0; i < v1.size(); ++i)
    {
        one = (one * 10) + v1[i];
    }

    for (int i = 0; i < v2.size(); ++i)
    {
        two = (two * 10) + v2[i];
    }

    for (int i = 0; i < v3.size(); ++i)
    {
        three = (three * 10) + v3[i];
    }

    // cout<<one << ' '<<two<<endl;
    ll sum2 = one + two;

    if (sum2 == three)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}