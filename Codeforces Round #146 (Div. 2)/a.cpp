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
    // knockcat
    string str;
    cin >> str;
    set<char> s;
    for (auto itr : str)
    {
        s.insert(itr);
    }

    // cout<<s.size()<<endl;

    if (s.size() & 1)
        cout << "IGNORE HIM!" << '\n';
    else
        cout << "CHAT WITH HER!" << '\n';
    // }

    return 0;
}