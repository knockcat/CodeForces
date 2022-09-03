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
        int n, k, r, c;
        cin>>n>>k>>r>>c;
 
        --r, --c;
        
        vector<vector<char>> a(n, vector<char>(n, '.'));
        a[r][c]='X';
 
        int x=r, y=c;
 
        while(x>=0)
        {
            for(int i=y; i<n; i+=k) a[x][i]='X';
            for(int i=y; i>=0; i-=k) a[x][i]='X';
 
            x=x-1, y=y+1;
            if(y>=n) 
                y=0;
        }
        x=r, y=c;
        while(x<n)
        {
            for(int i=y; i<n; i+=k) a[x][i]='X';
            for(int i=y; i>=0; i-=k) a[x][i]='X';
 
            x=x+1, y=y-1;
            if(y<0) 
                y=n-1;
        }
 
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout<<a[i][j];
            cout<<endl;
        }
    }
    return 0;
}