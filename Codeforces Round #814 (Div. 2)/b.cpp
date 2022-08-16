#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fast;
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, k;
        cin >> n >> k;

        if (k % 4 == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if (k % 4 == 1 || k%4 == 3)
        {
            cout << "YES" << endl;
            for (int i = 1; i < n; i += 2)
            {
                cout << i << " " << i + 1 << endl;
            }
            continue;
        }
        if (k % 4 == 2)
        {
            cout << "YES" << endl;
            for (int i = 1; i < n; i += 2)
            {
                if (i % 4 == 1)
                {
                    cout << i + 1 << " " << i << endl;
                }
                else
                    cout << i << " " << i + 1 << endl;
            }
        }
       
    }

    return 0;
}
