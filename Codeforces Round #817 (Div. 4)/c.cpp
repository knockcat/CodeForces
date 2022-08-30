#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        map<string, int> mp;
        vector<vector<string>> vec(3, vector<string>(n));
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> vec[i][j];
                mp[vec[i][j]]++;
            }
        }
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[vec[i][j]] == 1)
                {
                    if (i == 0)
                        a += 3;
                    else if (i == 1)
                        b += 3;
                    else if (i == 2)
                        c += 3;
                }
                if (mp[vec[i][j]] == 2)
                {
                    if (i == 0)
                        a += 1;
                    else if (i == 1)
                        b += 1;
                    else if (i == 2)
                        c += 1;
                }
            }
        }
        cout << a << " " << b << " " << c << "\n";
    }
    return 0;
}