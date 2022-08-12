#include <bits/stdc++.h>
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
using namespace std;

int main()
{
    // Knockcat

    fast;
    int tt;
    cin >> tt;

    while (tt--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int count = 0;

        if (b > a)
            ++count;
        if (c > a)
            ++count;
        if (d > a)
            ++count;

        cout << count << endl;
    }
}

// echs