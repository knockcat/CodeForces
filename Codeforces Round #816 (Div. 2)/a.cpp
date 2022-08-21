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
        int n, m;
        cin >> n >> m;

        if (n == 1 && m == 1)
            cout << 0 << endl;
        else
        {
            cout << n + m - 2 + min(n, m) << endl;
        }
    }
    return 0;
}