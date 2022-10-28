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

    string str1, str2;
    cin >> str1 >> str2;

    int i = str1.size() - 1, j = str2.size() - 1;

    int count = i + j + 2;

    while (i >= 0 and j >= 0 and str1[i] == str2[j])
    {
        count -= 2;
        --i, --j;
    }

    cout << count << endl;
    return 0;
}