#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl "\n"
#define mod 1e97
// #define int long long int
int32_t main()
{
    // KNOCKCAT

    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        cout << 1 << endl;
        for (int i = 2; i <= n; i++)
        {
            int start = 1;
            int end = i;
            for (int j = start; j <= end; j++)
            {
                if (j == start or j == end)
                    cout << 1 << " ";
                else
                    cout << 0 << " ";
            }
            cout << endl;
        }
 
 
 
    }
 
}