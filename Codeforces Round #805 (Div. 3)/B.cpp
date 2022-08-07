#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string str;
        cin >> str;

        unordered_map<char, int> mp;
        int count = 0;

        for (int i = 0; i < str.size(); ++i)
        {
            ++mp[str[i]];
            if (mp.size() > 3)
            {
                ++count;
                mp.clear();
                ++mp[str[i]];
            }
        }

        if (mp.size() == 0)
            cout << count << endl;
        else
            cout << count + 1 << endl;
    }
}