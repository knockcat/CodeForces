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

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat

        string str;
        cin >> str;

        bool ok = false;
        queue<string> q;
        q.push(str);

        while (!q.empty())
        {
            int size = q.size();
            while (size--)
            {
                string curr = q.front();
                q.pop();
                ll num = stoi(curr);
                if (num % 33 == 0)
                {
                    // cout<<num<<endl;
                    ok = true;
                    break;
                }
                for (int i = 1; i < curr.size(); ++i)
                {
                    if (curr[i] == '3' and curr[i - 1] == '3')
                    {
                        string newStr;
                        if (i - 2 >= 0)
                        {
                            newStr += curr.substr(0, i - 2 + 1);
                        }
                        if (i + 1 < curr.size())
                            newStr += curr.substr(i + 1);
                        if (!newStr.empty())
                        {
                            // cout << newStr << endl;
                            q.push(newStr);
                        }
                    }
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}