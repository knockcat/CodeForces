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

vector<int> divisors;

void getDivisors(int n)
{
    divisors.push_back(1);

    for (int i = 1; i < n; ++i)
    {
        if (n % i == 0)
            divisors.push_back(i);
    }
}

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

        string str;
        cin >> str;

        divisors.clear();

        getDivisors(n);

        int ans = n;

        auto match = [&](string have)
        {
            int cnt = 0;
            for (int i = 0; i < n; ++i)
            {
                if (str[i] != have[i])
                    ++cnt;
            }

            return cnt <= 1;
        };

        for (auto &div : divisors)
        {
            string f = str.substr(0, div);
            string s = str.substr(n - div);

            string first, second;
            for (int i = 0; i < (n / div); ++i)
            {
                first += f;
                second += s;
            }

            if (match(first) or match(second))
            {
                ans = div;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}