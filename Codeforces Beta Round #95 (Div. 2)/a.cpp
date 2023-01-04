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

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    string str;
    cin >> str;
    int n = str.size(), count = 0;
    for (auto itr : str)
    {
        if (itr >= 'A' and itr <= 'Z')
            ++count;
    }

    if (count == n)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    if (count == n - 1 and str[0] >= 'a' and str[0] <= 'z')
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        str[0] = toupper(str[0]);
    }
    cout << str << endl;
    return 0;
}
