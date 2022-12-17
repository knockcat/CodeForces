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

        string str;
        cin >> str;

        int first = str[0];
        int one, two;
        one = two = 1;

        map<int, int> mp;
        for (auto itr : str)
            ++mp[itr];

        for (int i = 0; i < n - 1; ++i)
        {
            two += 1;

            if (first == str[i])
            {
                cout << one << " ";
            }
            else
            {
                one = two - 1;
                first = str[i];
                cout << one << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
