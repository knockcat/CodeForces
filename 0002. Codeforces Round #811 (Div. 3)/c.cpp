#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define mod 1e9 + 7
#define endl "\n"
#define int long long int

int32_t main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int s;
        cin >> s;
        vector<int> v;
        vector<bool> vis(10, false);
        while (s != 0)
        {
            if (s >= 9 and !vis[9])
            {
                v.push_back(9);
                s -= 9;
                vis[9] = true;
            }
            else if (s >= 8 and !vis[8])
            {
                v.push_back(8);
                s -= 8;
                vis[8] = true;
            }
            else if (s >=7 and !vis[7])
            {
                v.push_back(7);
                s -= 7;
                vis[7] = true;
            }
            else if (s >= 6 and !vis[6])
            {
                v.push_back(6);
                s -= 6;
                vis[6] = true;
            }
            else if (s >= 5 and !vis[5])
            {
                v.push_back(5);
                s -= 5;
                vis[5] = true;
            }
            else if (s >= 4 and !vis[4])
            {
                v.push_back(4);
                s -= 4;
                vis[4] = true;
            }
            else if (s >= 3 and !vis[3])
            {
                v.push_back(3);
                s -= 3;
                vis[3] = true;
            }
            else if (s >= 2 and !vis[2])
            {
                v.push_back(2);
                s -= 2;
                vis[2] = true;
            }
            else if (s >= 1 and !vis[1])
            {
                v.push_back(1);
                s -= 1;
                vis[1] = true;
            }
        }

        for (int i = v.size() - 1; i >= 0; --i)
            cout << v[i];
        cout << endl;
        
    }

    return 0;
}