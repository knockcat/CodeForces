#include <bits/stdc++.h>
using namespace std;
#define std                        \
    ::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a * d == b * c)
            cout << 0 << endl;
        else
        {
            long long A = a * d;
            long long B = b * c;

            if ((B != 0) && (A % B == 0))
                cout << 1 << endl;
            else if ((A != 0) && (B % A == 0))
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}