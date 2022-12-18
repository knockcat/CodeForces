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
        string str;
        cin >> str;

        int sum = 0;
        vector<int> v;
        for (int i = 0; i < str.size(); ++i)
        {
            if (str[i] == '+' or str[i] == '-')
                continue;
            v.push_back(str[i] - '0');
        }

        sum = accumulate(v.begin(), v.end(), 0);

        cout << sum << endl;
    }
    return 0;
}
