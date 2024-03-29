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

const int N = 1e5;
vector<int> binaryDecimals;

bool zeroOne(int i)
{
    string num = to_string(i);

    for (auto &ch : num)
    {
        if (ch != '0' and ch != '1')
            return false;
    }
    return true;
}

void getBinaryDecimals()
{
    for (int i = 10; i <= N; ++i)
    {
        if (zeroOne(i))
            binaryDecimals.push_back(i);
    }
}

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    getBinaryDecimals();

    reverse(binaryDecimals.begin(), binaryDecimals.end());

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;

        for (auto &deci : binaryDecimals)
        {
            while (n % deci == 0)
                n /= deci;
        }

        cout << (n == 1 ? "YES" : "NO") << endl;
    }
    return 0;
}