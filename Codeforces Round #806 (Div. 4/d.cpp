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

        vector<string> vs(n);
        map<string, int> mp;
        vector<bool> ans;

        for (int i = 0; i < n; ++i)
        {
            cin >> vs[i];
            ++mp[vs[i]];
        }

        for (auto itr : vs)
        {
            string s = itr;
            bool flag = false;
            for (int i = 1; i < s.length(); ++i)
            {
                string a = s.substr(0, i);
                string b = s.substr(i);

                if (mp[a] && mp[b])
                {
                    ans.push_back(1);
                    flag = true;
                    break;
                }
            }
            if (!flag)
                ans.push_back(0);
        }

        for (auto itr : ans)
            cout << itr;
        cout << endl;
    }
}