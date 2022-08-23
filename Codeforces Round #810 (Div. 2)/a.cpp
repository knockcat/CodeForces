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
        int n;
        cin >> n;

        for (int i = 2; i <= n; ++i)
        {
            cout << i << " ";
        }
        cout << 1 << endl;
    }
}