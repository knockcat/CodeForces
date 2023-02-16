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

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        int n, m;
        cin >> n >> m;
        string str1, str2;
        cin >> str1 >> str2;

        int count1 = 0, count2 = 0;
        for (int i = 1; i < n; ++i)
        {
            if (str1[i] == str1[i - 1])
                ++count1;
        }

        for (int i = 1; i < m; ++i)
        {
            if (str2[i] == str2[i - 1])
                ++count2;
        }

        if(count1 > 1 or count2 > 1)
            cout<<"NO"<<endl;
        else if(count1 == 1 and count2 == 1)
            cout<<"NO"<<endl;
        else if((count1 == 1 or count2 == 1) and str1[n-1] == str2[m-1])
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}