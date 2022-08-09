#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        for (int i = 0; i < n; ++i)
        {
            int ind = 0;
            int cn;
            cin >> cn;
            for (int j = 0; j < cn; ++j)
            {
                char ch;
                cin >> ch;
                if (ch == 'D')
                {
                    if (v[i] == 9)
                        v[i] = 0;
                    else
                        v[i] += 1;
                }
                else
                {
                    if (v[i] == 0)
                        v[i] = 9;
                    else
                        v[i] -= 1;
                }
            }
        }

        for (auto itr : v)
            cout << itr << " ";
        cout << endl;
    }
}