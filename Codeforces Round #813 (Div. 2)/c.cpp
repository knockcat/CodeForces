#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fast;
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            ++mp[v[i]];
        }

        vector<int> vs = v;
        sort(vs.begin(), vs.end());

        if (vs == v)
            cout << 0 << endl;
        else
        {
            int count = 0;
            bool flag = false;
             for(int i = n-1; i>=0; --i)
             {
                if(mp[v[i]] != 0)
                    --mp[v[i]];
                if(mp[v[i-1]] != 0)
                    --mp[v[i-1]];
                if(v[i] >= v[i-1] && mp[v[i-1]] == 0 && mp[v[i]] == 0)
                {
                    flag = true;
                    ++count;
                }
                else
                    break;
             }

            if(count == 0)
                cout<<mp.size()-1<<endl;
            else
             cout<<mp.size()-count<<endl;
        }
    }
    return 0;
}