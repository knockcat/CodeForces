#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr)

int main()
{
    fast;
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, m;
        cin >> n >> m;

        if ((n & 1 && m & 1) || (n%2== 0 && m%2 == 0))
            cout << "Tonya" << endl;
        else
            cout << "Burenka" << endl;
    }
    return 0;
}