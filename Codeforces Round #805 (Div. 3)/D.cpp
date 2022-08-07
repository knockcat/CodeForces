#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        map<char, int> mp;
        int sum = 0;

        cin >> s;
        int p;
        cin >> p;
        for (auto it : s)
        {
            sum += (it - 'a') + 1;
        }

        string temp = s;
        sort(s.begin(), s.end(), greater<int>());

        int n = s.length();
        int i = 0;
        while (i < n and sum > p)
        {
            sum -= (s[i] - 'a') + 1;
            mp[s[i]]++;
            i++;
        }
        string ans = "";
        for (auto it : temp)
        {
            if (mp[it])
            {
                mp[it]--;
                continue;
            }
            ans += it;
        }
        cout << ans << endl;

        // string str;
        // cin >> str;
        // long long p;
        // cin >> p;

        // string ans = "";

        // for (int i = 0; i < str.length(); ++i)
        // {
        //     if (p == 0)
        //         break;
        //     if (str[i] - 'a' + 1 <= p)
        //     {
        //         // cout<<str[i]- 'a' + 1<<" ";
        //         ans += str[i];
        //         p -= str[i] - 'a' + 1;
        //     }
        //     else
        //         continue;
        // }
        // cout << ans << endl;
    }
}