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
        map<char, int> mp;
        int n;
        cin >> n;
        string str;
        cin >> str;

        for (auto itr : str)
            ++mp[itr];

        if (mp.size() == 5 && mp['i'] == 1 && mp['m'] == 1 && mp['u'] == 1 && mp['r'] == 1 && mp['T'] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}