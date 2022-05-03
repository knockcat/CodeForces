// https://codeforces.com/contest/1674/problem/B

// B. Dictionary

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        if (str[0] == str[1] || str[0] > str[1])
            cout << ((int)str[0] % 97) * 25 + ((int)str[1] % 97) + 1 << endl;
        else
            cout << ((int)str[0] % 97) * 25 + ((int)str[1] % 97) << endl;
    }
    return 0;
}

// Solution Link

// https://codeforces.com/contest/1674/submission/155675218