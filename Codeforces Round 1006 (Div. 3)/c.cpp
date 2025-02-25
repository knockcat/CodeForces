// JAI SHREE RAM
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
const ll eps = -1e9;
const ll maxn = 1e5 + 10;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine -> Success :D

/*
Things have not went as I wanted and yes I am feeling maybe this is not meant for me (because of results) but still I will do this as,
I cannot given up.
Reaching here and still trying is also a milestone for me.
My journey has been incredible and I will surely improve.
It's just a matter of time and I am sure I am going to make it.

Till now show some resistance, focus on small goals and the big goals will take care of themselves.
knockcat this side...
*/

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        ll n, x;
        cin >> n >> x;

        vector<int> bits(32, 0);
        for (int i = 0; i < 32; ++i)
        {
            if (x & (1 << i))
                bits[i] = 1;
        }

        vector<int> ans(n, 0);
        ans[n - 1] = x;

        int cnt = 0;
        int last = -1;
        ll bitOr = 0;
        for (int i = 1; i < n-1; ++i)
        {
            int num = i;
            bool ok = false;
            for (int b = 0; b < 32; ++b)
            {
                if ((num & (1 << b)) and bits[b] == 0)
                {
                    ok = true;
                    break;
                }
            }
            if (ok)
                break;
            ans[i] = i;
            last = i;
            bitOr |= i;
        }


        if(last != -1){
            ll nOr = bitOr | (last + 1);
            if(nOr == x){
                ans[n-1] = last+1;
            }
        }

        for(auto& x : ans)
            cout<<x<<' ';
        cout<<endl;
    }

    return 0;
}