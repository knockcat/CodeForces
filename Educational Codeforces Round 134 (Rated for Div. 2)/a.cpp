#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        string str1;
        string str2;
        cin >> str1;
        cin >> str2;

        unordered_map<char, int> mp;
        for (auto itr : str1)
            ++mp[itr];
        for (auto itr : str2)
            ++mp[itr];

        if (mp.size() == 4)
            cout << 3 << endl;
        if (mp.size() == 3)
            cout << 2 << endl;
        if (mp.size() == 2)
            cout << 1 << endl;
        if (mp.size() == 1)
            cout << 0 << endl;
    }
    return 0;
}