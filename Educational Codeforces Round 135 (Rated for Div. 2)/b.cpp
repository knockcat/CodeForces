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

       if(n-2 & 1)
       {
       cout<<1<<" ";
       for(int i = 3; i<n; i+=2)
            cout<<i<<" "<<i-1<<" ";
       }
       else{
        for(int i = 2; i<n; i+=2)
            cout<<i<<" "<<i-1<<" ";
       }

       cout<<n-1<<" "<<n<<endl;
    }
}