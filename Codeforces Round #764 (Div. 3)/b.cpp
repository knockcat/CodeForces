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

        int a, b, c;
        cin >> a >> b >> c;
        int m = -1;
        if((2*b-c) % a == 0 and (2*b-c) > 0)
            m = (2*b-c)/a;
        else if((a+c)%(2*b) == 0)
            m = a+c/(2*b);
        else if((2*b-a)%c == 0 and (2*b-a) > 0)
            m = (2*b-a)/c;

        if(m == -1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        
    }

    return 0;
}

  