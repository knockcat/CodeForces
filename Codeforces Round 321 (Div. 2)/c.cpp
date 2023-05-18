#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7,inf = 1e18;
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void setIO()
{
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
int n = 1e5 + 5,m;
vvi adj(n);
vi a(n);
int ans = 0;
void dfs(int u,int p,int numC,int maxC)
{
    if (a[u])numC++;
    else numC = 0;
    maxC = max(maxC,numC);//now we know for each node the max # of 
    //consecutive cats in the path from 1 to that node
    int numChild = 0;
    for (int v:adj[u]){
        if (v != p){
            dfs(v,u,numC,maxC);
            numChild++;
        }
    }
    if (numChild == 0 && maxC <= m)ans++;
}
int main()
{
    setIO();
    cin>>n>>m;
    for (int i = 1;i<=n;i++)cin>>a[i];
    for (int i = 1;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(1,-1,0,0);
    cout<<ans;
    return 0;
}