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
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        int n;
        cin >> n;

        set<string> st;

        for (char ch = 'a'; ch <= 'z'; ++ch)
        {
            for (char ch2 = 'a'; ch2 <= 'z'; ++ch2)
            {
                for (char ch3 = 'a'; ch3 <= 'z'; ++ch3)
                {
                    int f = ch - 'a' + 1;
                    int s = ch2 - 'a' + 1;
                    int t = ch3 - 'a' + 1;

                    if (f + s + t == n)
                    {
                        string curr;
                        curr += ch;
                        curr += ch2;
                        curr += ch3;

                        st.insert(curr);
                    }
                }
            }
        }

        if (st.empty())
            cout << " ";
        else
            cout << *st.begin() << endl;
    }
    return 0;
}