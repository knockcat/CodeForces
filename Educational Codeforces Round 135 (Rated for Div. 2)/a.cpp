#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long int

int32_t main()
{
    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        unordered_map<int,int> mp;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];   
            ++mp[v[i]];
        }

        if (n == 1)
            cout << 1 << endl;
        else if(mp.size() == 1)
            cout<<n<<endl;
        else
        {
            int mx = max_element(v.begin(),v.end()) - v.begin();
            cout<<mx+1<<endl;
        }
    }
}