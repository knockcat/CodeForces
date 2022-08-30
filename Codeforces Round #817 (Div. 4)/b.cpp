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
        int n;
        cin >> n;
        string str1, str2;
        cin >> str1 >> str2;

        for (int i = 0; i < n; ++i)
        {
            if (str1[i] == 'G')
                str1[i] = 'B';
            if (str2[i] == 'G')
                str2[i] = 'B';
        }

        if (str1 == str2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}