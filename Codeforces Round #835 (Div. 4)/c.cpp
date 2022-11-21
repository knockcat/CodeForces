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

        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        vector<int> ok = v;
        sort(ok.begin(), ok.end());

        int maxi = ok[ok.size() - 1];
        int maxi2 = ok[ok.size() - 2];
        // cout<<maxi<<" "<<maxi2<<endl;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] != maxi)
                cout << v[i] - maxi << " ";
            else
                cout << v[i] - maxi2 << " ";
        }

        cout << endl;
    }

    return 0;
}