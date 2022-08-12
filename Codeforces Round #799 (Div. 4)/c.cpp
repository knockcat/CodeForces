#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

bool ispossible(int r, int c)
{
    return (r >= 0 && r < 8 && c < 8 && c >= 0);
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        // cout << endl;

        vector<vector<char>> v(8, vector<char>(8));

        for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
                cin >> v[i][j];
        }

        for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {
                if (v[i][j] == '#')
                {
                    if (ispossible(i - 1, j - 1) && v[i - 1][j - 1] == '#')
                    {
                        if (ispossible(i + 1, j - 1) && v[i + 1][j - 1] == '#')
                        {
                            if (ispossible(i - 1, j + 1) && v[i - 1][j + 1] == '#')
                            {
                                if (ispossible(i + 1, j + 1) && v[i + 1][j + 1] == '#')
                                {
                                    cout << i + 1 << " " << j + 1 << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}