// https://codeforces.com/contest/1674/problem/A

// A. Number Transformation

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int m = y / x;

        if (y % x != 0)
            cout << 0 << " " << 0 << endl;
        else
            cout << 1 << " " << m << endl;
    }
    return 0;
}

// Solution Link

// https://codeforces.com/contest/1674/submission/155682594