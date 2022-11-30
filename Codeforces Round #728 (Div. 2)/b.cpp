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
        unordered_map<int,int> mp;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            mp[v[i]] = i+1;
        }

        int count = 0;
        for(int i = 1; i<=2*n; ++i)
        {
            for(int j = i+1; j< 2*n; ++j)
            {
                if(i*j > 2*n) break;
                int product = i*j;
                if(mp.find(i) == mp.end() or mp.find(j) == mp.end())
                    continue;
                if(mp[i] + mp[j] == product)
                    ++count;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}
