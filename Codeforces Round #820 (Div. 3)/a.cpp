#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl "\n"
#define mod 1e97
#define int long long int
int32_t main()
{
    // KNOCKCAT

    fast;
    int tt;
    cin >> tt;

    while (tt--)
    {
        int a, b, c;
        cin >> a >> b >> c;
       
        int first = abs(a - 1);
        int second = 0;

        if(a == 1)
            first = 0;

        second = abs(c-b);
        second += abs(c-1);
        

        if(first == second)
            cout<<3<<endl;
        else if(first < second)
            cout<<1<<endl;
        else 
            cout<<2<<endl;
        

    }
    return 0;
}
