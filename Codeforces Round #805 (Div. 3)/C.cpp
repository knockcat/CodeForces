#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >>  tt;
    while(tt--)
    {
        cout<<endl;


        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        vector<vector<int>> vs;

        for(int i = 0;i<n; ++i)
            cin >> v[i];

        map<int,vector<int> >mp;

        for(int i = 0; i<n; ++i)
        {
            mp[v[i]].push_back(i);
        }

    //    for(auto itr : mp)
    //    {
    //         cout<<itr.first<<" ";
    //         for(auto x : itr.second)
    //             cout<<x<<" ";
    //         cout<<endl;
    //    }

        for(int i = 0; i<k ; ++i)
        {
            int a , b;
            cin >> a >> b;
            bool flag = false;
           if(mp.find(a) != mp.end() &&  mp.find(b) != mp.end())
           {
                flag = true;
                if(mp[a][0] < mp[b][mp[b].size()-1] )
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
           }
            if(!flag)
                cout<<"NO"<<endl;
        }

    }
}