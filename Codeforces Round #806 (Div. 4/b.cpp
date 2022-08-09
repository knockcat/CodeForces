#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        map<char, int> mp;
        int count = 0;

        for (int i = 0; i < str.size(); ++i)
        {
            if (!mp[str[i]])
                count += 2;
            else
                ++count;

            ++mp[str[i]];
        }

        cout << count << '\n';
    }
    return 0;
}